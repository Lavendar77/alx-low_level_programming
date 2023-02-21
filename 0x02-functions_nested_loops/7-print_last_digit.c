#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print last digit
 * @n: number to check
 *
 * Description: Print the last digit of the number
 *
 * Return: int
*/
int print_last_digit(int n)
{
	int lastDigit = (abs(n) % 10);

	_putchar('0' + lastDigit);

	return (lastDigit);
}
