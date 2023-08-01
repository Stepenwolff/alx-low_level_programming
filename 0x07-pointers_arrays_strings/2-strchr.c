i#include "main.h"

/**
 * _strchr - Locate the first occurrence of a character in a string.
 * @s: Pointer to the input string.
 * @c: Character to be found.
 *
 * Return: Pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
