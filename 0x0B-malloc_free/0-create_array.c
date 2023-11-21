#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: Array size
 * @c: Special character to initialize
 * Return: pointer to array (Success), NULL (failure)
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	size_t i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
