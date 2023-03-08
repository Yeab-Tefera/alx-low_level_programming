#include "main.h"

/**
 * factorial- returns the factorial of a given number
 * @n: number to be factored
 *
 * Return: -1 if n is < 0 otherwise 1 if n == 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return 1;
	return (n * factorial(n-1));
}
