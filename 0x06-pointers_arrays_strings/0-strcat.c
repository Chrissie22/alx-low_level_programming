#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: where to append string
 * @src: string to append
 *
 * Return: pointer to concatenated string, dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (dest[len] != '\0')
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
