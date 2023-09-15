#include "main"

/**
 * more_numbers - print numbers multiple times 0 - 14
 * Foloowed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
