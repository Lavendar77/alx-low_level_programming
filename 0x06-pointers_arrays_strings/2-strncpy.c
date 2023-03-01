#include "main.h"
#include <string.h>

/**
 * _strncpy - copy string
 * @dest: destination string
 * @src: string to copy from
 * @n: number of characters to copy
 *
 * Return: *
*/
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
