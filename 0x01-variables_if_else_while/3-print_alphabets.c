#include <stdio.h>

/**
 * main- prints the alphabet in lowercase and 
 * then uppercase followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 65; i < 123; i++)
	{
		if (i >= 65 && i <= 90)
			putchar(i);
		else if (i >= 97 && i <= 122)
			putchar (i);
		else
			continue;
	}
	return (0);
}
