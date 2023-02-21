#include "main.h"
#include <ctype.h>

/**
 * _isalpha - is alpha
 * @c: The character to check
 *
 * Description: check if argument is a letter, lower or upper using ctype
 *
 * Return: int
*/
int _isalpha(int c)
{
	return (isalpha(c) ? 1 : 0);
}
