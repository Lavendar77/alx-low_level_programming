#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		int j = 0;
		int length = strlen(argv[i]);

		while (j < length)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum = sum + atoi(argv[i]);

		i++;
	}

	printf("%d\n", sum);

	return (0);
}
