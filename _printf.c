#include "holberton.h"
#include <stdio.h>
/**
 * _printf - print any arguments passed
 *@format: format to print
 *
 * Return: void
 */

void _printf(const char *format, ...)
{
	char tmp;
	int index;
	int dict;
	va_list list;

	Dictionary args[] = {
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	va_start(list, format);
	index = 0;
	while (format != NULL && format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;

			for (dict = 0; args[dict].handle != '\0'; dict++)
			{
				if (format[index] == args[dict].handle)
				{
					args[dict].func(list);
					_putchar(' ');
					break;
				}
			}
		}
		else
		{
			_putchar(format[index]);
		}
		index++;
	}
	_putchar('\n');
	va_end(list);
}
