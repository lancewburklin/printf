#include "holberton.h"
#include <stdio.h>
/**
 * _printf - print any arguments passed
 *@format: format to print
 *
 * Return: void
 */

int _printf(const char *format, ...)
{
	int rval, index, dict, tmp = 0;
	va_list list;

	Dictionary args[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_string},
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
					rval = args[dict].func(list);
					tmp = tmp + returnval;
					break;
				}
			}
		}
		else
		{
			tmp = tmp + 1;
			_putchar(format[index]);
		}
		index++;
	}
	va_end(list);
	return (tmp);
}
