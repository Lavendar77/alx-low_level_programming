#include "main.h"
#include <ctype.h>

/**
 * _islower - is lowercase
 * @c: The character to check
 *
 * Description: check if argument is lowercase using ctype
 *
 * Return: int
*/
int _islower(int c)
{
	return (islower(c) ? 1 : 0);
}
