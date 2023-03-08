#include "main.h"

/**
 * Magic_sqrt- accepts two parameters with the second parameter value of 1
 * if neccessary incrementing it upto n value to find
 * the correct value of the function
 * @i: Holds n's value
 * @j: value to be incremented or decremented from 1 to n
 *
 * Return: -1 if j*j > i, otherwise j
 */
 
int Magic_sqrt(int i, int j)
{
	if (j * j > i)
		return (-1);
	if (j * j == i)
		return (j);
	return (Magic_sqrt(i, j + 1));
}

/**
 * _sqrt_recursion- Returns the natural sqaure root of a number
 * @n: number
 *
 * Return: -1 if n < 0
 */

int _sqrt_recursion(int n)
{
	return (Magic_sqrt(n, 1));
}
