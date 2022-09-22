#include "main.h"

/**
 * _strcat - contcatenates string pointed by src
 * @dest: String to be appended
 * @src: String to be concatenated
 * @n: integer parameter to compare index
 * Return: returns pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++ = src[index];

	return (dest);
}
