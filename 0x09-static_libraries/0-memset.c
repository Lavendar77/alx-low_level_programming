#include "main.h"
#include <string.h>

/**
 * _memset - fill a byte string with a byte value
 * @s: the value to fill
 * @b: the byte to fill
 * @n: the length bytes of @b
 *
 * Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
