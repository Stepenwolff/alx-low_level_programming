#include "main.h"

/**
 * _memset - Fill a block of memory with a specific value.
 * @s: Starting address of memory to be filled.
 * @b: The desired value to fill the memory with.
 * @n: Number of bytes to be changed.
 *
 * Return: Pointer to the updated memory block.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
