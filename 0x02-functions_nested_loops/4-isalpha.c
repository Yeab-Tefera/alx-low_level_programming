#include "main.h"

/**
 * _isalpha- check for alphabetic character
 * @c: char to be checked
 *
 * Return: 1 if c is alphabetic. 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
