#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Determines if an integer is a prime number or not.
 * @n: The number to evaluate.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1) /* Check if n is less than or equal to 1, which is not a prime number */
		return (0);

	return (actual_prime(n, n - 1)); /* Call the helper function to check if n is prime */
}

/**
 * actual_prime - Recursively checks if a number is prime.
 * @n: The number to evaluate.
 * @i: Iterator used to check potential divisors.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int actual_prime(int n, int i)
{
	if (i == 1) /* Base case: if the iterator reaches 1, n is prime */
		return (1);

	if (n % i = 0 && i > 0) /* Check if n is divisible by the current iterator i */
		return (0);

	return (actual_prime(n, i - 1)); /* Recursively check for divisors with the previous iterator */
}
