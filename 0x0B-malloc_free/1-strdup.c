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
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}

	newstr = strdup(str);

	return (newstr);
}
