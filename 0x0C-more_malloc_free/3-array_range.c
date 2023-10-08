#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers of range max,
 * containing integer numbers from min through max.
 * @min: Input starts from min
 * @max: Size of array and length of input
 *
 * Return: Array of integers.
 */
int *array_range(int min, int max)
{
	int *arr, range, i;

	if (min > max)
		return (NULL);

	range = max - min + 1;

	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		arr[i] = min++;

	return (arr);
}
