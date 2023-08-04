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

	return (actual_sqrt_recursion(n, 0)); /* Call helper function to find  root */
}

/**
 * actual_sqrt_recursion - Finds the natural square root of a number.
 * @n: The number for which to calculate the square root.
 * @i: Iterator to keep track of possible square roots.
 *
 * Return: Sqrt result. Returns -1 if no perfect square root is found.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n) /* If sqr of current iterator is >n, no perfect sqrt */
		return (-1);

	if (i * i == n) /* Base case: if sqr of iterator ==n, return the iterator */
		return (i);

	return (actual_sqrt_recursion(n, i + 1)); /* Search for the sqrt */
}
