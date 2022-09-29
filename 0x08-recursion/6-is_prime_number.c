#include "main.h"

/**
 *
 *
 *
 *
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == 0)
			return (1);
		else 
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - checks if an intput integer is a prme number.
 * @n: inut number.
 * Return: 1 if the input integer is a prime number. 0 if otherwise.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
