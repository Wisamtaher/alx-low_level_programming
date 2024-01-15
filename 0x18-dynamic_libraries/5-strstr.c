#include "main.h"
/**
 * _strstr - It is a function
 * @haystack: Variable from main
 * @needle: Variable from main
 * Return: Return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}
	return (NULL);
}
