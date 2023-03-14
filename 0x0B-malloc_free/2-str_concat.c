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
	int i = 0;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	result = malloc(sizeof(char));

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
