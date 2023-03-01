#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate string up to n characters
 * @dest: destination string
 * @src: string to concatenate into destination
 * @n: number of characters to concatenate
 *
 * Return: *
*/
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
