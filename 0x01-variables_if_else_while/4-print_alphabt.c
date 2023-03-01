#include <stdio.h>

/**
 * main- prints the alphabet in lowercase 
 * followed by a new line 
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
		putchar(i);
	}
	putchar('\n');
	
	return (0);
}
