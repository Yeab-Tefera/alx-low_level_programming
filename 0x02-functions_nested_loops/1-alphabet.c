#include "main.h"

/**
 * print_alphabet - print lowercase alphabets
 * followed by a new line
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
