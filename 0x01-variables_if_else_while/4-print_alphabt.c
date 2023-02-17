#include <stdio.h>

/**
 * main - entry file
 *
 * Description: 'print all alphabets in lowercase except q and e'
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (!(a == 'e' || a == 'q'))
		{
			putchar(a);
		}
		a++;
	}

	putchar('\n');

	return (0);
}
