#include "main.h"
#include <string.h>

/**
 * _strspn - span a string
 * @s: the string
 * @accept: the charset
 *
 * Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
