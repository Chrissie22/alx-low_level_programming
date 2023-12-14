#include <unistd.h>

/**
 * _putchar - Writes a character to the stdout
 * @c: Character to print
 *
 * Return: 1 on suuces.
 * or -1, if error and set errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
