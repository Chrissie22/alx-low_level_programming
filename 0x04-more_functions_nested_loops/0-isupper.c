#include "main.h"

/**
 * _isupper - it checks if c is an uppercase character
 * @c: character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
