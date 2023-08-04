#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string (excluding the null terminator).
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Checks whether the current character is null terminator */
		return (0);

	return (1 + _strlen_recursion(s + 1)); /* Calculate length of the string */
}
