#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @s: String to reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int lenght = strlen(s);

	while (lenght --)
		putchar(*(s + lenght));
	putchar(10);
}
