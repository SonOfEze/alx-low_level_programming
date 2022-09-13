#include <stdio.h>

/**
 * main - to prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_a,num_b;

	for (num_a = 0; num_a < 9; num_a++)
	{
		for (num_b = num_a + 1; num_b < 10; num_b++)
		{
			putchar(a);
			putchar(b);
			if (a != 56 || b != 57)
			{
				putchar((num_a % 10) + '0');
				putchar(' num_b % 10) + '0');
				
				if (num_a == 8 && num_b == 9)

					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
