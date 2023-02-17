#include <stdio.h>

/**
 * main - entry file
 *
 * Description: 'print all single digit in base 10 using putchar'
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');

		a++;
	}

	putchar('\n');

	return (0);
}
