#include "main.h"

/**
 * _puts- prints a string, followed by a new line
 * to stdout
 * @str: string to print
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int c = 0;

	while (c >= 0)
	{
		if (str[c] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[c]);
		c++;
	}
}
