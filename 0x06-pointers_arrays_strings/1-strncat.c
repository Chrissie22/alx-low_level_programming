#include "main.h"

/**
 * _strncat - copies nth number of characters from string src to dest
 * @dest: string to add characters to
 * @src: string to copy
 * @n: number of characters to add
 *
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;
	while (dest[len] != '\0')
		len++;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len++] = src[i];
	}

	dest[len] = '\0';

	return (dest);
