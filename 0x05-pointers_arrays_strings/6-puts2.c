#include "main.h"
#include <string.h>

/**
 * puts2 - print every other character
 * @str: string to reverse
 *
 * Return: void
*/
void puts2(char *str)
{
	int i = 0;
	int length = strlen(str);

	while (i < length)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}

	_putchar('\n');
}
