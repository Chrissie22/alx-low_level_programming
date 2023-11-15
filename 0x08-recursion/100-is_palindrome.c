#include "main.h"
int _strlen_recursion(char *s);
int _check_palindrome(char *s, int i, int len);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to check
 *
 * Return: 1 if string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - calculates the length of a string
 * @s: string to calculate
 *
 * Return: length of s.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _check_palindrome - checks if a string is palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of string (s).
 *
 * Return: 1 if string is a palindrome, 0 otherwise.
 */
int _check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_check_palindrome(s, i + 1, len - 1));
}
