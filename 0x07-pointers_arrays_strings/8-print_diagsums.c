#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the two diagonals of a square matrix.
 * @a: Pointer to the 2D array representing the square matrix.
 * @size: The size of the square matrix (number of rows and columns).
 *
 * Return: void (No return value).
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;
	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
