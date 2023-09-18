#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string to compute
 *
 * Return: length of string s.
 */
int _strlen(char *s)
{
	int i, length;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		length++;
		i++;
	}

	return (length);
}
