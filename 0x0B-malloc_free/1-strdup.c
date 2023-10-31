#include "main.h"

/**
 * _strdup - function
 * @str: variable
 * Return: duplicate
 */

char *_strdup(char *str)
{
	int len, i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
