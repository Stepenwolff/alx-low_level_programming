#include "main.h"

/**
 * _strpbrk - Search a string for any set of bytes.
 * @s: Pointer to the input string.
 * @accept: Pointer to the string containing the bytes to be searched.
 *
 * Return: Pointer to the first occurrence in @s of any byte in @accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
		if (*s == accept[k])
		return (s);
	}
	s++;
	}

	return ('\0');
}
