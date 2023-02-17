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
	int number = 0;
	char alphabet = 'a';

	while (number < 10)
	{
		putchar(number + '0');

		number++;
	}

	while (alphabet <= 'f')
	{
		putchar(alphabet);

		alphabet++;
	}

	putchar('\n');

	return (0);
}
