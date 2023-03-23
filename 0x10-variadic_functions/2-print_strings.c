#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *spr, *ptr;
	va_list sl;
	unsigned int i;

	if (*separator == 0 || separator == NULL)
		spr = "";
	else
		spr = (char *) separator;
	va_start(sl, n);
	if (n > 0)
		printf("%s", va_arg(sl, char *));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(sl, char *);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", spr, ptr);
	}
	printf("\n");

	va_end(sl);
}
