#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a: the array
 * @size: the size of the array
 *
 * Return: void
*/
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		int x = i;
		int y = i;

		sum += *(a + (x * size + y));
	}

	printf("%d, ", sum);

	sum = 0;

	for (i = 0; i < size; i++)
	{
		int x = (size - 1) - i;
		int y = i;


		sum += *(a + (x * size + y));
	}

	printf("%d\n", sum);
}
