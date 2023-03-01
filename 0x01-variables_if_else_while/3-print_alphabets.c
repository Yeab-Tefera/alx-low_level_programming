#include <stdio.h>

/**
 * main- prints the alphabet in lowercase and
 * then uppercase followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j;
	
	for (i = 97; i < 123; i++)
	{
		putchar(i);
		continue;
			for (j = 65; j < 91; j++)	
			{
				putchar(i);
			}
		
	
	}
	putchar('\n');
	
	return (0);
}
