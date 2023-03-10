#include "main.h"
#include <string.h>

/**
 * _strstr - locate a substring in a string
 * @haystack: the string
 * @needle: the string to locate
 *
 * Return: char
*/
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
