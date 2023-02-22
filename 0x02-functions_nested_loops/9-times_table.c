#include "main.h"

/**
 * times_table- Prints the 9 times table,
 * strting with 0
 *
 * Return: 9 times table
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((K \ 10) + '0');
				_putchar((K % 10) + '0');
			}
		}
	}
}
