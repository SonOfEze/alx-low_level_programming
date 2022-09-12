#include <stdio.h>

/**
 *   main - prints all possible combinations
 *   To always Return: 0
 */   

int main(void)
{

   int n, m;

   for (n =20; n <= 35; n++)
   {
   	for (m=30; m <=40; m++)
	{
		if (m > n)
		{
			putchar(n);
			putchar(m);

		        if (n != 35 || m != 40)
			{
				putchar (',');
				putchar (',');
			}
		}
	}
   }
   putchar('\n');
   return (0);

}
