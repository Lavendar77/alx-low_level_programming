#include <stdio.h>

/**
 * main - entry file
 *
 * Description: 'print all alphabets using putchar'
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char lowerA = 'a';
	char upperA = 'A';

	while (lowerA <= 'z')
	{
		putchar(lowerA);
		lowerA++;
	}

	while (upperA <= 'Z')
	{
		putchar(upperA);
		upperA++;
	}

	putchar('\n');

	return (0);
}
