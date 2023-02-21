#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print up to number
 * @n: starting number
 *
 * Description: print natural number up to number
 *
 * Return: void
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}

			n++;
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}

			n--;
		}
	}

	printf("\n");
}
