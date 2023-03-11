#include "main.h"
#include <stdlib.h>

int change(int cents);

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", change(atoi(argv[1])));

	return (0);
}




/**
 * change - calculate change
 * @cents: the cents
 *
 * Return: int
*/
int change(int cents)
{
	int coins = 0, q = 25, d = 10, n = 5, t = 2, p = 1;

	while (cents > 0)
	{
		while (cents >= q)
		{
			cents -= q;
			coins++;
		}

		while (cents >= d)
		{
			cents -= d;
			coins++;
		}

		while (cents >= n)
		{
			cents -= n;
			coins++;
		}

		while (cents >= t)
		{
			cents -= t;
			coins++;
		}

		while (cents >= p)
		{
			cents -= p;
			coins++;
		}
	}

	return (coins);
}
