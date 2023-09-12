#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-vaued terms
 * of fibonacci numbers under the value of 4000000.
 * Followed by a new line
 *
 * Return: Always 0 upon (Success).
 */
int main(void)
{
	short int i;
	unsigned long int j, k, n, sum;

	j = 1, k = 2, n = 0, sum = 0;

	for (i = 1; i <= 32; i++)
	{
		if (j % 2 == 0)
			sum += j;
		n = j + k;
		j = k;
		k = n;
	}

	printf("%lu\n", sum);
	return (0);
}
