#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size of the array
 * @c: the character to set in the array
 *
 * Return: pointer or NULL
*/
char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(unsigned int) * size);
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
