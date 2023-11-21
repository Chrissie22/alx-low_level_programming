#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: String to duplicate
 *
 * Return: Pointer to duplicated string, or NULL if failed.
 */
char *_strdup(char *str)
{
	int a, len;
	char *new_str;

	if (!str)
		return (NULL);

	len = 0;
	while (str[len])
		len++;

	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);

	for (a = 0; str[a]; a++)
		new_str[a] = str[a];
	new_str[a] = '\0';

	return (new_str);
}
