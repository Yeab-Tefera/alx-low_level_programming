#include "main.h"

/**
 * print_most_numbers- prints the numbers from
 * 0 to 9 followed by a new line
 */

void print_most_numbers(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
		n++;
	}
		_putchar('\n');
}
