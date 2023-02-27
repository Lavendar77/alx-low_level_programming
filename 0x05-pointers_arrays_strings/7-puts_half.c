#include "main.h"
#include <string.h>

/**
 * puts_half - print half of string
 * @str: the string
 *
 * Return: void
*/
void puts_half(char *str)
{
	int length = strlen(str);

	int i;

	int n = (length + 1) / 2;

	if (length % 2 != 0)
	{
		n = (length - 1) / 2;
	}

	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
