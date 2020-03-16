#include "holberton.h"

/**
 * print_char - Prints characters and strings
 * @args: Arguments to print
 *
 * Return: 1, always
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @args: String to print
 *
 * Return: Length of the string
 */

int print_string(va_list args)
{
	int i;
	char *letter = va_arg(args, char *);

	if (letter == NULL)
		return (0);
	for (i = 0; letter[i] != '\0'; i++)
		_putchar(letter[i]);
	i--;
	return (i);
}
