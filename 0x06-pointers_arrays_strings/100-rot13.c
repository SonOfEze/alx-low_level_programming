#include "main.h"

/**
 * rot13 - main encoder
 * @str: string to be encoded
 * Return: address of  str
 */

char *rot13(char *str)
{
	int i, j;

	char a[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char b[52] = "nopqrstuvwxyzabcdefgihjklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(str + i))
			{
				*(str + i) = b[j];
				break;
			}
		}
	}
	return (str);
}
