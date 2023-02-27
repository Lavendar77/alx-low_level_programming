#include "main.h"

/**
 * swap_int - int two integers
 * @a: variable to swap with b
 * @b: variable to swap with a
 *
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
