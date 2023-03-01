#include <stdio.h>

/**
 * main- prints all possible combinations
 * of two two-digit numbers.
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 57; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for(l = 47; l < 58; l++)
				{
					if (i > j)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i == 57 && j == 56)
							continue;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
