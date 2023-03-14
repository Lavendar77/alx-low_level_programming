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
	char *result;
	int index, concat_index = 0, len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (index = 0; s1[index] || s2[index]; index++)
	{
		len++;
	}

	result = malloc(sizeof(char) * len);

	if (result == NULL)
	{
		return (NULL);
	}

	for (index = 0; s1[index]; index++)
	{
		result[concat_index++] = s1[index];
	}

	for (index = 0; s2[index]; index++)
	{
		result[concat_index++] = s2[index];
	}

	return (result);
}
