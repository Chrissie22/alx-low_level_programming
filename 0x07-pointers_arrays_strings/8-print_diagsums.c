#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals of square
 * matrix, followed by a new line.
 * @a: The matrix.
 * @size: size of matrix.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size + 1) * i];
		sum1 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
