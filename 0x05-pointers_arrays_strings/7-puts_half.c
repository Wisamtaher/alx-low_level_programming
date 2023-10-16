#include "main.h"

/**
 * puts_half - main function
 * @str: variable
 * Return: void
 */

void puts_half(char *str)
{
	int i, l;

	for (l = 0; str[l] != '\0'; l++)
	{

	}
	if (l % 2 == 0)
	{
		for (i = l / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = (l + 1) / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
