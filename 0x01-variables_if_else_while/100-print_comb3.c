#include <stdio.h>

/**
 * main- Prints all possible different combinations of two digits
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i == 57 && j == 57)
				}
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
