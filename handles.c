#include "holberton.h"

/**
 * print_int - prints an int
 *@list: agrument provided to print
 */

int print_int(va_list list)
{
	/* Shift int to Ascii value of char */
	int num = va_arg(list, int);
	int negative = 0;
	int revNum[10];
	int index = 0;
	int addvalue = 0;


	if (num < 0)
	{
		index++;
		negative = 1;
		_putchar('-');
		addvalue = addvalue + 1;
	}

	for (; num % 10 != 0; index++)
	{
		revNum[index] = (num % 10) > 0
			? num % 10
			: (num % 10) * -1;
		num = num / 10;
	}

	for (index--; negative ? index > 0 : index >= 0; index--)
	{
		_putchar(revNum[index] + 48);
		addvalue = addvalue + 1;
	}
	return (addvalue);
}
