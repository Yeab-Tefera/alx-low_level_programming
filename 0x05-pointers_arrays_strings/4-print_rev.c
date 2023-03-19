#include "main.h"

/**
 * print_rev- prints a string in reverse
 * @s- string to be printed
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c = c - 1; s[c] != '\0';  c--)
	{
		_putchar(s[c]);
	}

	_puchar('\n');
}
