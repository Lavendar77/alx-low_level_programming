#include <stdio.h>

/**
 * main - entry file
 *
 * Description: 'print all single digit in base 10 separated with comma'
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');

		number++;

		if (number < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
