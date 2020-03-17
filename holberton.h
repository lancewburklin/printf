#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct Dictionary - pairs a handle char with a print funciton
 *
 * @handle: Format specifier
 * @func: The function
*/
typedef struct Dictionary
{
	char handle;
	int (*func)(va_list list);
} Dictionary;

int _putchar(char c);

int _printf(const char *format, ...);

int print_int(va_list list);

int print_char(va_list list);

int print_string(va_list list);

int print_percent(va_list list);

int print_arg(va_list, int index, const char *format, int tmp);

Dictionary *make_args(void);

#endif
