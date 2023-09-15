#include "main.h"

/**
 * print_line - prints underscore n time, to draw a straight lien
 * Followed by a new line
 * @n: number of times to print underscore
 *
 * Return: void
 */
void print_line(int n)
{
	if (n < 0 && n == 0)
		_putchar('\n');
	else
		for (; n >= 1; n--)
			_putchar('_');
	_putchar('\n');
}
