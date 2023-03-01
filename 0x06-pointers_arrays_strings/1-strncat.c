#include "main.h"
#include <string.h>

/**
 * _strncat - copy string up to n characters
 * @dest: destination string
 * @src: string to copy into destination
 * @n: number of characters to copy
 *
 * Return: *
*/
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
