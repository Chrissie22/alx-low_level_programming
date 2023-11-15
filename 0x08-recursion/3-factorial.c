#include "main.h"

/**
 * factorial - calculate the factorial of a number
 * @n: number to factorize
 *
 * Return: -1 if n < 0 to indicate an error,
 * 1 if n is 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
