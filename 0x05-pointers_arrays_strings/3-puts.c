#include "main.h"
#include <stdio.h>
/**
 * _puts - To print a string
 * @str: string to be printed
 * Description: To print a string
 * If successful: return no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
