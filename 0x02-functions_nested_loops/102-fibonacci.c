#include <stdio.h>

/**
 * main - prints first 50 fibonnaci numbers,
 * starting with 1 and 2
 *
 * Return: Always 0 upon (Success).
 */
int main(void)
{
	short int i;
	unsigned long int j, k, n;

	j = 1, k = 2, n = 0;

	for (i = 0; i < 50; i++)
	{
		if (j != 20365011074)
			printf("%lu, ", j);
		else
			printf("%lu\n", j);
		n = j + k;
		j = k;
		k = n;
	}
	return (0);
}
