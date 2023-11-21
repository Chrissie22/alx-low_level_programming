#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to a newly allocated space in memory which conatains
 * the contents s1 followed by s2 and null terminated.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1])
		len1++;

	len2 = 0;
	while (s2[len2])
		len2++;

	new_str = malloc((len1 + len2) + 1);
	if (!new_str)
		return (NULL);

	i = 0;
	if (s1)
	{
		for (j = 0; s1[j]; j++, i++)
			new_str[i] = s1[j];
	}

	if (s2)
	{
		for (j = 0; s2[j]; j++, i++)
			new_str[i] = s2[j];
	}

	new_str[i] = '\0';
	return (new_str);
}
