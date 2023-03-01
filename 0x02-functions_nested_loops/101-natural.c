#include <stdio.h>

/**
 * main- prints sum of all the multiplies of
 * 3 or 5 below 1024(excluded)
 *
 * Return: Always 0
 */

int main(void)
{
	long int sum = 0, s3 = 0, s5 = 0;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0)
			s3 += i;
		else if ((i % 5) == 0)
			s5 += i;
	}
	sum = s3 + s5;
	printf("%lu\n", sum);
	return (0);
}
