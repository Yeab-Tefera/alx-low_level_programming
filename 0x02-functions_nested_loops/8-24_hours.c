#include "main.h"

/**
 * jack_bauer- Prints evey minute of the day of jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: 24 hour format
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	for (; h < 24; h++)
	{
		m = 0;
		for (; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
