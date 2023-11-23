#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of memory bytes to allocate
 * @size: size of byte to allocate
 *
 * Return: Pointer to the allocate memory area.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i, len;
	void *ptr;
	char *initzr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;

	ptr = malloc(len);

	if (ptr == NULL)
		return (NULL);

	initzr = ptr;
	for (i = 0; i < len; i++)
		initzr[i] = '\0';

	ptr = initzr;

	return (ptr);
}
