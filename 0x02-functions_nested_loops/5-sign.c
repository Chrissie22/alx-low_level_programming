#include "main.h"

/**
 * print_sign - prints the sign of n
 * @n: number to check sign
 *
 * Return: 1 if n is positive, 0 if n is zero,
 * -1 if n is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
		_putchar('-');
	return (-1);
}
