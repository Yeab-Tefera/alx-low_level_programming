#include "main.h"

/**
 * is_prime_number- Checks whether a number is prime or not
 * @n: number
 *
 * Return: 1 if prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (Magic_prime(n, 2));
}

/**
 * Magic_prime: 
