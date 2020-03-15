#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * Dictionary - pairs a handle char with a print funciton
*/
typedef struct Dictionary
{
	char handle;
	void (*func)(va_list list);
}Dictionary;

int _putchar(char c);

void _printf(const char * format, ...);

void print_int(va_list list);

#endif
