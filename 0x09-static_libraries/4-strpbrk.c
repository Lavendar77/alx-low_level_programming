#include "main.h"
#include <string.h>

/**
 * _strpbrk - locate multiple characters in string
 * @s: the string
 * @accept: the charset
 *
 * Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
