#include "main.h"

/**
 * main- print the alphabet, in lowercase 
 * followed by a new line
 * use only _putchar twice 
 * Return: void
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
