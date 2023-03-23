#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers followd by a new line
 * @separator: separater to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing;
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	const char *pr;
	va_list ap;
	int i;

	if (separator == NULL || *separator == 0)
		pr = "";
	else
		pr = (char *) separator;
	va_start(ap, n);
	if (n > 0)
		printf("%d", va_arg(ap, int));
	for (i = 1; i < n; i++)
		printf("%s%d", pr, va_arg(ap, int));
	_putchar('\n');

	va_end(ap);
}
