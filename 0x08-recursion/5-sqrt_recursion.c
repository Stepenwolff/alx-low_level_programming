#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The resulting square root. Returns -1 for negative numbers.
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Check if the number is negative */
		return (-1);
	
	return (actual_sqrt_recursion(n, 0)); /* Call the helper function to find the square root */
}

/**
 * actual_sqrt_recursion - Recursively finds the natural square root of a number.
 * @n: The number for which to calculate the square root.
 * @i: Iterator to keep track of possible square roots.
 *
 * Return: The resulting square root. Returns -1 if no perfect square root is found.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n) /* If the square of the current iterator is greater than n, no perfect square root exists */
		return (-1);

	if (i * i == n) /* Base case: if the square of the iterator matches n, return the iterator as the square root */
		return (i);

	return (actual_sqrt_recursion(n, i + 1)); /* Recursively search for the square root with the next iterator */
}

