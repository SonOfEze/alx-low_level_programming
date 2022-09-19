#include "main.h"

/**
 * _strlen - return lenght of string
 * @s: String variable
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*(s + lenght) != '\0')
		lenght++;

	return (lenght);
}
