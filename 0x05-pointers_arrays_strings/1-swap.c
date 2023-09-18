#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
