#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - produces output according to a format
 * @format: pointer to a string and may include formats
 * Return: integer, return number of printed characters
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, result = 0, va_arg_loop_condition = 1;
	va_list args;
	int (*fmt_func)(va_list *);

	va_start(args, format);

	while (va_arg_loop_condition)
	{
		while (format && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				fmt_func = get_fmt_func(format[i]);

				if (fmt_func)
				{
					result += fmt_func(&args);
					i++;
					continue;
				}
				else
				{
					result += print_normal_char(format[i]);
				}
			}
			else
			{
				result += print_normal_char(format[i]);
			}

			i++;
		}

		va_arg_loop_condition = 0;
	}

	va_end(args);

	return (result);
}
