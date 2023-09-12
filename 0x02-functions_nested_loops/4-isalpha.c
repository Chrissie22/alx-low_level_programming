#include "main.h"

/**
 * _isalpha - checks if c is an alphabet
 * @c: character to check
 *
 * Return: 1 if c is an alphabet, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
