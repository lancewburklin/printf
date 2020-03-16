#include "holberton.h"
#define DTEST 3 + 4
#define ITEST -2147483648

int main(void)
{
	char *stest = "TEST";

	/* %d and %i test */
	_printf("no1: %d no2: %i string: %s\n", DTEST, ITEST, stest);
	return 0;
}
