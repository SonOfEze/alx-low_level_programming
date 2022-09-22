#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @n: passes argument
 * Return: last digit
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	n = -n;

	x = n % 10;

	_putchar(x + 10)

	return (n % 10);
}
