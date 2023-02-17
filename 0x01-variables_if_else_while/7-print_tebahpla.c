#include <stdio.h>

/**
 * main - entry file
 *
 * Description: 'print all lowercase alphabets in reverse'
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}

	putchar('\n');

	return (0);
}
