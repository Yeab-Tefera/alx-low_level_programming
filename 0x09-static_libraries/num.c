#include "main.h"

/**
 * _abs- Computes the absolute value of an integer
 * @n: value to examined
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int _isalpha(int c)
{
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
                return (1);
        else
                return (0);
}
int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
                return (1);
        else
                return (0);

int _isupper(int c)
{
        if ((c >= 'A') && (c <= 'Z'))
                return (1);
        else
                return (0);
}}
int _isdigit(int c)
{
        if (isdigit(c))
                return (1);
        else
                return (0);
}
