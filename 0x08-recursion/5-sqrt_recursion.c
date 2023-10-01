#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt - calculates the sqaure root of n
 * @n: number to calculate square root of
 * @i: iterator
 *
 * Return: square root of n.
 */
int _sqrt(int n, int i)
{
	if (i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to evalute
 *
 * Return: -1 if n does not have a natural square root or,
 * the square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}
