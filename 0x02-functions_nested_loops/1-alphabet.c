#include "main.h"

/**
 * print_alphabet- print lowercase 
 * followed by a new line
 * use only _putchar twice 
 *
 * Return: 
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
