#include "main.h"

/**
 * puts2 - Prints multiples of 2 characters in a string
 * @str: sting to print
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
