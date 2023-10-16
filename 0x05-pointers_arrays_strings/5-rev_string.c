#include "main.h"

/**
 * rev_string - main function
 * @s: variable
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (s[j] != '\0')
	{
		j++;
	}
	j--;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
