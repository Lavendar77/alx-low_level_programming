#include "main.h"

/**
 * more_numbers - more numbers
 *
 * Description: print 10 rows of numbers from 0 to 14
 *
 * Return: void
*/
void more_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		int j = 0;

		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}

			_putchar((j % 10) + '0');
		}

		_putchar('\n');
	}
}
