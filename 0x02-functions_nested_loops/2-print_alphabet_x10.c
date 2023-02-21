#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Description: print lowercase alphabets
 *
 * Return: void
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');
		i++;
	}
}
