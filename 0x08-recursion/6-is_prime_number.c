#include "main.h"

/**
 * is_divisible - checks if a n is divible by div
 * @n: number to check
 * @div: number to divide n by
 *
 * Return: 1 if divisible, 0 otherwise.
 */
int is_divisible(int n, int div)
{
	if (n % div == 0)
		return (0);

	if (div == n / 2)
		return (1);

	return (is_divisible(n, div + 1));
}

/**
 * is_prime_number - checks if a number is prime or not
 * @n: number to check
 *
 * Return: 1 if a number is prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div + 1));
}
