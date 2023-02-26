#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- assigns a rendom number to the variable n
 * each time it is executed
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	return (0);
}
