#include "main.h"

/**
 * swap_int- swaps the values of two integers
 * @a: num 1
 * @b: num 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
