#include "holberton.h"
#define DTEST 3 + 4
#include <stdio.h>
int main(void)
{
	char *stest = "TEST";
	char c = 97.3546;
	int itest = -2147483648;

	_printf("no1: %d\n", 3 + 4);
	_printf("no2: %i\n", -214);
	_printf("no3: %s\n", stest);
	_printf("no4: %c\n", c);
	_printf("no5: %%\n");
	_printf("no6: %r\n", 1);
	_printf("-----------------------\n");
	_printf("no1: %d\nno2: %i\nno3: %s\nno4: %c\nno5: %%\n", 42, itest, "yes", 'c');
	_printf("\n");
	printf("no1: %d\n", 3 + 4);
	printf("no2: %i\n", -214);
	printf("no3: %s\n", stest);
	printf("no4: %c\n", c);
	printf("no5: %%\n");
	printf("no6: %r\n", 1);
	printf("-----------------------\n");
	printf("no1: %d\nno2: %i\nno3: %s\nno4: %c\nno5: %%\n",  42, itest, "yes", 'c');

	return 0;
}
