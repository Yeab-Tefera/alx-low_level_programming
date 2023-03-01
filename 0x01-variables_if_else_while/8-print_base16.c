#include <stdio.h>

/**
 * main- Prints all numbers of base 16
 * in lowercase followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 59; i++)
	{
		if (i < 58)
		{
			putchar(i);
			continue;
		}
		for (j = 97; j < 103; j++)
		{
			putchar(j);
		}
	}
	putchar('\n');

	return (0);
}
