#include <stdio.h>

/**
 *Main -  Print the string in the put function
 *
 * Description: using the main function
 * This program prints the value of a variable
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %ld bytes(s)\n", sizeof(c));
	printf("size of a int: %ld bytes(s)\n", sizeof(i));
	printf("size of a long int: %ld bytes(s)\n", sizeof(li));
	printf("size of a long long int: %ld byteis(s)\n", sizeof(lli));
	printf("size of a float: %ld bytes(s)\n", sizeof(f));
	return (0);
}
