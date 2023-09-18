#include "main.h"

/**
 * _puts - writes the string str and a trailing new line
 * @str: string to write
 *
 * Return: void.
 */
void _puts(char *str)
{
	int i, len;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
