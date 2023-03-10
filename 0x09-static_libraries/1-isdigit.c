#include "main.h"
#include <ctype.h>

/**
 * _isdigit - decimal-digit character test
 * @c: value to check
 *
 * Description: check if value is digit
 *
 * Return: int
*/
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}

	return (0);
}
