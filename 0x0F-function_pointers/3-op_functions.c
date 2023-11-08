#include "3-calc.h"

/**
 * op_add - addition
 * @a: variable
 * @b: variable
 * Return: add
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctraction
 * @a: variable
 * @b: variable
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: variable
 * @b: variable
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: variable
 * @b: variable
 * Return: division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modul
 * @a: variable
 * @b: variable
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
