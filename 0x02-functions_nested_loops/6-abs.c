#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number to compute
 *
 * Return: absolute value of n.
 */
int _abs(int n)
{
	if (n < 0)
		return (n = n * -1);
	return (n);
}
