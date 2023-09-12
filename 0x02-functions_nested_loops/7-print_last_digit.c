#include "main.h"

/**
 * print_last_digit - prints and return the last digit of n
 * @n: number to compute
 *
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
		l = l * -1;

	_putchar(l + '0');
	return (l);
}
