#include "holberton.h"
#define DTEST 3 + 4
#define ITEST -2147483648

int main(void)
{
	char *stest = "TEST";

	/* %d and %i test */
	_printf("no1: %d\n", DTEST);
	_printf("no2: %i\n", ITEST);
	_printf("no3: %s\n", stest);
	_printf("no4: %c\n", 'c');
	_printf("no5: %%\n");
	_printf("-----------------------\n");
	_printf("no1: %d\nno2: %i\nno3: %s\nno4: %c\nno5: %%\n", DTEST, ITEST, stest, 'c');
	return 0;
}
