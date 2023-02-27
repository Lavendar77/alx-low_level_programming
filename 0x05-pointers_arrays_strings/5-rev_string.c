#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverse string
 * @s: string to reverse
 *
 * Return: void
*/
void rev_string(char *s)
{
	int length = strlen(s);
	int i;
	int c;
	char temp;

	c = length - 1;

	for (i = 0; c >= 0 && i < c; c--, i++)
	{
		temp = s[i];
		s[i] = s[c];
		s[c] = temp;
	}
}
