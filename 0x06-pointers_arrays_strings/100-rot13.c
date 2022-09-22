#include "main.h"

/**
 * rot13 - main encoder
 * @str: string to be encoded
 * Return: address to the string encoded
 */

char *rot13(char *str)
{
	int i, j;

	char a[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char b[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefgihjklm";

	for (i = 0; * (str + i); i++)
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
