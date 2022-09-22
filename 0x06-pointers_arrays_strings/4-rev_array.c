#include "main.h"

/**
 * reverse_array - function that reverts the cintect of an array
 * @a: array
 * @n:numbr of elements
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - i; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
