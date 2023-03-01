#include <stido.h>

/**
 * main- Prints lower case alphabet in reverse
 * , followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 123; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
