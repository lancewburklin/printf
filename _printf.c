#include "holberton.h"

/**
 * _printf - print any arguments passed
 *@format: format to print
 *
 * Return: void
 */

int _printf(const char *format, ...)
{
	int index, tmp = 0;
	va_list list;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);
	va_start(list, format);
	index = 0;
	while (format != NULL && format[index] != '\0')
	{
		if (format[index] == '%')
		{
			if (format[index + 1] == '\0')
				return (-1);
			if (format[index + 1] == ' ' && format[index + 2] == '\0')
				return (-1);
			index++;
			func = get_func(format[index]);
			if (func != NULL && format[index] != '\0')
			{
				tmp += func(list);
			}
			else
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
 * get_func - gets the correct function to use
 *@dict: test char
 *
 * Return: pointer to correct function
 */

int (*get_func(char dict))(va_list)
{
	Dictionary args[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};
	int index = 0;

	while (args[index].handle  != '\0')
	{
		if (args[index].handle == dict)
		{
			return (args[index].func);
		}
		index++;
	}

	return (args[index].func);
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
