#include <stdio.h>

/**
 * main - entry file
 *
 * Description: 'print all single digit in base 10'
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);

		a++;
	}

	putchar('\n');

	return (0);
}
