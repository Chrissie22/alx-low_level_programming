#include "main.h"

/**
 * _strcpy - copies a string from 'src' to 'dest'
 * @dest: destination
 * @src: string to copy to destination
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
