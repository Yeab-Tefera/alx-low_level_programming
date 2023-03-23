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
	const char *p;
	va_list pn;
	int i;
	
	if (separator == NULL || *separator == 0)
		p = "";
	else
		p = (char *) separator;
	va_start(pn, n);
	
	if (n > 0)
		printf("%d", va_arg(pn, unsigned int));
	for (i = 1; i < n; i++)
		printf("%s%d", p, va_arg(pn, unsigned int));

	printf("\n");
	va_end(pn);
}
