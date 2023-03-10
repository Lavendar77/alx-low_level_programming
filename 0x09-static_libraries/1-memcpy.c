#include "main.h"
#include <string.h>

/**
 * _memcpy - copy memory area
 * @dest: value to copy memory into
 * @src: value to copy
 * @n: number of bytes to copy
 *
 * Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
