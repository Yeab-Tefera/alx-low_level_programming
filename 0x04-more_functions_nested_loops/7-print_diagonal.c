#include "main.h"

/**
 * print_diagonal- draws a digonal line on the terminal
 * @n: number of times the charachter printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{	
				if (j == i)
					_putchar(92);
				else if (j < i)
					_putchar(' ');
			}
			
			_putchar('\n');
		}
	}
}
