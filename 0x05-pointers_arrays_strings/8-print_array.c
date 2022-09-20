#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elemnts of arrays
 * @a: array
 * @n: number element
 * Return: 0
 */

void print_array(int *a, int n)
{
	int elm_num;

	for (elm_num = 0; elm_num < n; elm_num++)
	{
		if (elm_num != n - 1)
			printf("%d,", a[elm_num]);
		else
			printf("%d", a[elm_num]);
	}
	putchar(10);
}
