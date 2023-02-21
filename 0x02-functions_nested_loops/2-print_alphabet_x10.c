#include "main.h"

/**
 * print_alphabet_x10- Print 10 times lowercase
 * alphabet followed by a new line
 *
 * Return:
 */
void print_alphabet_x10(void)
{
	char a;
	char b;

	for (a = 'a'; a <= 'j'; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
