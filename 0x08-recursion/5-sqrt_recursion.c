#include "main.h"

#ifndef FILE_H
#define FILE_H

int squareroot(int n, int i);

#endif

/**
 * _sqrt_recursion - natural square root of a number
 * @n: the number
 *
 * Return: int
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (squareroot(n, (n + 1) / 2));
	}
}

/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: counter
 *
 * Return: int
 */
int squareroot(int n, int i)
{
	if (i < 1)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (squareroot(n, i - 1));
	}
}
