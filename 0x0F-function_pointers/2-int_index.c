#include "function_pointers.h"

/**
 * int_index - Search for an integer in an array.
 * @array: Input integer array.
 * @size: Size of the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of first element for which cmp != 0, else -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	
	return (-1);
}
