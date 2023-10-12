#include <stdio.h>
#include <math.h>

/**
 * int _isupper - Main function
 *
 * Return: zero
 */

unsigned long largest_prime_factor(unsigned long n) 
{
	unsigned long largest_prime_factor = 1;
	for (unsigned long i = 2; i * i <= n; i++)
	{
		if (n % i == 0 && is_prime(i));
		largest_prime_factor = i;
	}
}

return largest_prime_factor;

}

int is_prime(unsigned long n) 
{
	if (n <= 1) 
	{
		return 0;
	}
	for (unsigned long i = 2; i * i <= n; i++) 
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main() 
{
	unsigned long n = 612852475143;
	unsigned long largest_prime_factor = largest_prime_factor(n);
	printf("%lu\n", largest_prime_factor);
	return 0;
}
