#include "main.h"
#include <stdlib.h>

/**
 * str_concat - allocate memory of concatenated strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer or NULL
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, x = 0, y = 0;
	char *result;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = s2 = "";
	}

	for (x = 0; x <= *s1; x++)
	{
	}

	for (y = 0; y <= *s2; y++)
	{
	}

	result = malloc(sizeof(char) * (x + y + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	while (*s1)
	{
		result[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		result[i] = *s2;
		i++;
		s2++;
	}

	return (result);
}
