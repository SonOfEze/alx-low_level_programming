#include "main.h"

/**
 *_isdigit - check the code
 *@c: To contain value
 *Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	_putchar('\n');
	return (0);
}
