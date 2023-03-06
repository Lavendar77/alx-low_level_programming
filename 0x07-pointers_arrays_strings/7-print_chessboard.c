#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: the array
 *
 * Return: void
*/
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 8; i++)
	{
		int j = 0;

		int size = sizeof(a[i]) / sizeof(a[i][j]);

		while (j < size)
		{
			_putchar(a[i][j]);

			j++;
		}

		_putchar('\n');
	}
}
