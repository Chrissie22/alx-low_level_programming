#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Memory area
 * @b: byte to fill into  memory area.
 * @n: First number of times c should be filled
 *
 * Return: pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	for ( ; i < n; i++)
		s[i] = '\0';

	return (s);
}
