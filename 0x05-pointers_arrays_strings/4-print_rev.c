#include "main.h"
#include <string.h>

/**
 * print_rev - print string in reverse
 * @s: string to reverse
 *
 * Return: void
*/
void print_rev(char *s)
{
	int length = strlen(s);

	int i;

	for (i = (length - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
