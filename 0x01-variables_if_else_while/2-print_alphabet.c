#include <stdio.h>

/**
 * main - entry file
 *
 * Description: 'print all alphabets in lowercase using putchar'
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
