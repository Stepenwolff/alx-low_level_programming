#include "main.h"

/**
 * _memcpy - Copy memory area from source to destination.
 * @dest: Memory where the data will be copied to.
 * @src: Memory where the data is stored.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to the destination memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
