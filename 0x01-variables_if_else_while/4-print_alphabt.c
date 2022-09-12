#include <stdio.h>

/**
 * Main-function to print the alphabet in lowercase,
 * followed by a new line, print alphaet except for q and e
 * return: 0
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
	alph++;
	}
	putchar('\n');
	return (0);
}
