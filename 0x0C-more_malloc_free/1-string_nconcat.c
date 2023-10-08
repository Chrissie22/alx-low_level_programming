#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates nth bytes of string s2 into string s1
 * followed by a null terminator.
 * @s1: string for concatenation.
 * @s2: string to concatenate.
 * @n: Number of bytes to concatenate.
 *
 * Return: Newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (len = 0; s1[len]; len++)
		;

	len += n;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (s1[i])
		ptr[j++] = s1[i++];

	i = 0;
	while (i < n)
		ptr[j++] = s2[i++];

	ptr[j] = '\0';

	return (ptr);
}
