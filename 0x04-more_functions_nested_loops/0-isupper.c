#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 * @c character to be tested.
 *Return: Always 0.
 */

int _isupper(int c)
{
	if ((c>= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
