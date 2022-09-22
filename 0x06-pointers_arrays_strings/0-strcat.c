#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates the string pointed by @src to @dest
 * @dest: String that will be appended
 * @src: String to be concatenated
 * Return: pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}