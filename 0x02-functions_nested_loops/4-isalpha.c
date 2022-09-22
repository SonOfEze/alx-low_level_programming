#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: character
 * Return: return 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
