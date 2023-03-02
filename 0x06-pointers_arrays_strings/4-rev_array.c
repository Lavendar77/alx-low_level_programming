#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: the number of elements in the array
 *
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		int answer = a[i - 1];

		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}

		if (answer < 10)
		{
			_putchar((answer % 10) + 48);
		}
		else if (answer >= 10 && answer < 100)
		{
			_putchar(((answer / 10) % 10) + 48);
			_putchar((answer % 10) + 48);
		}
		else if (answer >= 100 && answer < 1000)
		{
			_putchar(((answer / 100) % 10) + 48);
			_putchar(((answer / 10) % 10) + 48);
			_putchar((answer % 10) + 48);
		}
		else if (answer >= 1000 && answer < 10000)
		{
			_putchar(((answer / 1000) % 10) + 48);
			_putchar(((answer / 100) % 10) + 48);
			_putchar(((answer / 10) % 10) + 48);
			_putchar((answer % 10) + 48);
		}
	}

	_putchar('\n');
}
