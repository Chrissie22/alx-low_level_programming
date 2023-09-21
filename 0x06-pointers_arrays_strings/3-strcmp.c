#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if s1 and s2 are equal or positive number if s1 > s2,
 * or negative number if s1 < s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
