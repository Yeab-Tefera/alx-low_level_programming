#include "main.h"
#include <stdio.h>

/**
 * print_to_98- Prints all natural numbers
 * from n to 98
 * @n: value to pe printed
 *
 * Return:
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		printf("%d, ", i);
	}
	
	return (0);
}
