#include "main.h"

/**
 * main - entry point
 *
 * Description: use _putchar to print '_putchar'
 *
 * Return: 0 (Always success)
*/
int main(void)
{
	int i = 0;
	char arg[] = "_putchar";

	while (i < 8)
	{
		_putchar(arg[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
