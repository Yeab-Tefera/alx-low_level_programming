#include "main.h"
#include <stdio.h>

/**
 * print_to_98- Prints all natural numbers
 * from n to 98
 * @n: value to pe printed
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;
	int j;

	if (n < 99)
	{
		for (i = n; i < 99; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}
	else if (n > 97)
	{
		for (j = n; j > 97; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
