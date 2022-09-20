#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, tmp, lenght = _strlen (s);

	for (i = 0; i < lenght / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + lenght - i - 1);
		*(s + lenght - i - 1) = tmp;
	}
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: the length of the given string
 */

int _strlen (char *s)
{
	int lenght = 0;

	while (*(s + lenght) != '\0')
		i++;

	return (lenght);
}

