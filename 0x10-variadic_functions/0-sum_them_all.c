#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: number of arguments taken
 *
 * Return: 0 if n == 0, other wise sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (unsigned int i = 0; i < n; i++)
		sum += va_arg(ap,const unsigned int);
	va_end(ap);

	return (sum);
}
