#include "function_pointers.h"

/**
 * array_iterator - Prints an array of integers in format of
 * function passed.
 * @array: array of integers
 * @size: size of array
 * @action: Pointer to function passed for format printing
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;

	for (i = 0U; i < size; i++)
		action(array[i]);
}
