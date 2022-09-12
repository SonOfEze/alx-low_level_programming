#include <stdio.h>

/**
 *   main - to print alpahbet in lower case.
 *   creates new line
 *   Return: 0
 */   
int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
