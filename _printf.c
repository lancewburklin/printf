#include "holberton.h"

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
		{'%', print_percent},
		{'\0', NULL}
	};

	va_start(list, format);
	index = 0;
	while (format != NULL && format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '\0')
				return (-1);
			for (dict = 0; args[dict].handle != '\0'; dict++)
			{
				if (format[index] == args[dict].handle)
				{
					tmp += args[dict].func(list);
					break;
				}
			}
			if (args[dict].handle == '\0')
				tmp = print_arg(list, index, format, tmp);
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

/**
 * print_arg - handles flags not in dictionary and prints them
 *@list: argument used
 *@index: index of format
 *@format: format string used
 *@tmp: printed character counter
 *
 *Return: tmp
 */

int print_arg(va_list list, int index, const char *format, int tmp)
{
	int useless = va_arg(list, int);

	index--;
	(void)useless;
	if (format[index] != ' ' && format[index] != '\0')
	{
		tmp = tmp + 2;
		_putchar(format[index]);
		_putchar(format[index + 1]);
	}
	return (tmp);
}
