#include "main.h"

/**
 * print_most_numbers- prints the numbers from 
 * 0 to 9 followed by a new line
 */

void print_most_numbers(void)
{
	int n = 0, m = 0;
	
	while (n < 10)
	{
		while (m != 2 && m != 4)
		{
			_putchar(m);
			n++;
		}
		n++;
	}
		_putchar('\n')
}
