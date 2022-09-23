#include "main.h"

/**
 * void print_numbers(void) - a function that prints the numbers
 */

void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar('0' + num);
		num++;
	}
	_putchar('\n');
}
