#include <stdio.h>

/**
 * main- Prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 * 
 * Return: Always 0
 */

int main(void)
{
	long int i, f;
	f = 1;
	
	for (i = 0; i < 50; i++)
	{
		printf("%d, ", f);
		f += i;
	}
	putchar('\n');

	return (0);
}

