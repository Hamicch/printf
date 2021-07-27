#include <stdlib.h>
#include "holberton.h"

/**
 * get_fmt_func - checks if @@fmt_identifier matches valid format
 * identifier type
 *
 * @fmt_identifier: format identifier
 *
 * Return: pointer to function that prints format of @fmt_identifier
 * if @@fmt_identifier is a valid format (SUCCESS) or
 * NULL if @@fmt_identifier isn't (FAILURE)
 */
int (*get_fmt_func(char fmt_identifier))(va_list *)
{
	fmt_struct_data_type fmt_struct_arr[] = {
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL}
	};
	int i = 0;

	while (fmt_struct_arr[i].fmt_identifier)
	{
		if (fmt_struct_arr[i].fmt_identifier == fmt_identifier)
		{
			return (fmt_struct_arr[i].fmt_print_func);
		}

		i++;
	}

	return (fmt_struct_arr[i].fmt_print_func);
}
