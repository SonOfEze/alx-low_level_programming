#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints a string
 * @str: string to print
 * Return: nothing
 */

void puts_half(char *str);
{
	int i, lenght = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
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
	int lenght = 0;

	while (*(s + lenght) != '\0')
		lenght++;

	return (lenght);
}
