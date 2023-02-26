#include "main.h"
#include <ctype.h>

/**
 * _isupper - is uppercase
 * @c: value to check
 *
 * Description: check if value is uppercase
 *
 * Return: int
*/
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}

	return (0);
}
