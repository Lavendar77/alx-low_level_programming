#include "main.h"

/**
 * cap_string - capitalize first letter of word in string
 * @s: string to convert
 *
 * Return: char
*/
char *cap_string(char *s)
{
	int i;
	int j;
	int k;
	int separators[] = {' ', '\t', '\n', ',', ';', '.', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - k;
		}

		k = 0;

		for (j = 0; j <= 12; j++)
		{
			if (s[i] == separators[j])
			{
				j = 12;
				k = 32;
			}
		}
	}

	return (s);
}
