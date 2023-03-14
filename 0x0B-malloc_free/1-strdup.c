#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strdup - create new memory space of string
 * @str: the string to copy
 *
 * Return: pointer or NULL
*/
char *_strdup(char *str)
{
	char *newstr = strdup(str);

	if (str == NULL || newstr == NULL)
	{
		return (NULL);
	}

	return (newstr);
}
