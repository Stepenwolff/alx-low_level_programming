#include "main.h"

/**
 * factorial - Computes the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of n. Returns -1 for negative numbers.
 */
int factorial(int n)
{
	if (n < 0) /* Check if the number is negative */
		return (-1);

	if (n == 0) /* Base case: factorial of 0 is 1 */
		return (1);

	return (n * factorial(n - 1)); /* Recursively calculate the factorial of n */
}
