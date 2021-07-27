#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_normal_char - prints a char that isn't from va_list
 * @c: char
 * Return: 1, which is the count of character printed
 */
int print_normal_char(char c)
{
	_putchar(c);

	return (1);
}

/**
 * print_char - prints a char
 * @arg: pointer to a char
 * Return: integer, number of characters printed
 */

int print_char(va_list *arg)
{
	_putchar(va_arg(*arg, int));

	return (1);
}

/**
 * print_int - prints an int
 * @arg: pointer to int
 * Return: integer, number of characters printed
 */

int print_int(va_list *arg)
{
	printf("%d", va_arg(*arg, int));
	return (8);
}

/**
 * print_float - prints a float data type
 * @arg: pointer to float
 * Return: integer, number of characters printed
 */

int print_float(va_list *arg)
{
	printf("%f", va_arg(*arg, double));
	return (29);
}

/**
 * print_string - prints a string
 * @arg: pointer to string
 * Return: integer, number of characters printed
 */

int print_string(va_list *arg)
{
	char *str[1];
	int i;

	str[0] = va_arg(*arg, char *);

	for (i = 0; str[0][i] != '\0'; i++)
		_putchar(str[0][i]);

	return (i);
}
