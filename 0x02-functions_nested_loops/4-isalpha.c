#include "main.h"
#include <ctype.h>

/**
 * _isalpha - is alpha
 * @c: The character to check
 *
 * Description: check if argument is a letter, lowercase or uppercase using ctype
 *
 * Return: int
*/
int _isalpha(int c)
{
	return (isalpha(c) ? 1 : 0);
}
