#ifndef PRINTF_FUNCTIONS_H_
#define PRINTF_FUNCTIONS_H_
#include <stdarg.h>

/**
 * struct fmt_struct - format-type class/object/struct
 * @fmt_identifier: format identifier
 * @fmt_print_func: pointer to function that prints in the format of @format
 */

struct fmt_struct
{
	char fmt_identifier;
	int (*fmt_print_func)(va_list *arg_list);
};

typedef struct fmt_struct fmt_struct_data_type;

int _putchar(char c);
int _printf(const char *format, ...);

int (*get_fmt_func(char identifier))(va_list *);

int print_char(va_list *arg);
int print_int(va_list *arg);
int print_float(va_list *arg);
int print_string(va_list *arg);
int print_normal_char(char c);

#endif /* #ifndef PRINTF_FUNCTIONS_H_ */
