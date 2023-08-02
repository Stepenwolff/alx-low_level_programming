#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base value.
 * @y: The exponent.
 *
 * Return: x result to power y. Returns -1 for negative exponents.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* Check if the exponent is negative */
		return (-1);

	if (y == 0) /* Base case: any number raised to the power of 0 is 1 */
		return (1);

	return (x * _pow_recursion(x, y - 1)); /* Calculate x to power of y */
}
