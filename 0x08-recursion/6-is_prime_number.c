#include "main.h"

#ifndef FILE_H
#define FILE_H

int prime_checker(int n, int i);

#endif

/**
 * is_prime_number - prime number checker
 * @n: the number
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (prime_checker(n, n / 2) > 0)
	{
		return (1);
	}

	return (0);
}

/**
 * prime_checker - checks for prime
 * @n: the number
 * @i: counter
 *
 * Return: int
 */
int prime_checker(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime_checker(n, i - 1));
	}
}
