#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets in lowercase
 * Followed by a new line
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	i = 0;
	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
		i++;
	}
}
