#include "main.h"

/**
 * _puts - main function
 * @str: variable
 * Return:void
 */

void _puts(char *str)

{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
