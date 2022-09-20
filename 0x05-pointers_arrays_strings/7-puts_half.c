#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints a string
 * @str: string to print
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, length = _strlen(str);

	for (i = ((length - 1) / 2) + 1; i < length; i++)
		putchar(*(str + i));
	putchar(10);
}


/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: the length of the given string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;

	return (length);
}
