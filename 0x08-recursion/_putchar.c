#include <unistd.h>

/**
 * _putchar - writes a character to the stdout
 * @c: Character to print
 *
 * Return: On success 1,
 * -1 if failed, and set errno approriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
