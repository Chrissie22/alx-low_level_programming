#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: string to search
 * @accept: The set of bytes
 *
 * Return: pointer to the byte in s that matches that matches
 * one of the set of bytes in accept, or NULL if non found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s++ != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (*s == accept[j])
				return (s);
	}
	return (NULL);
}
