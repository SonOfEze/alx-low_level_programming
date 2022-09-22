#include "main.h"

/**
 * rot13 - main encoder
 * @str: string to be encoded
 * Return: address to the string encoded
 */

char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform_2(str[i]);
		i++
	}
	return (str);
}

/**
 * transform_2 - helper function to map letter with its rot13 encoding
 * @a: char to be encoded
 * return: the encoded char
 */

char transform_2(char a)
{
	char one[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char two[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefgihjklm";
	int i = 0;
	char replacement = a;

	while (i < 52)
	{
		if (a == one[i])
		{
			replacement = two[i];
			break;
		}
		i++;
	}
	return (replacement);
}
