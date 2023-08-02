#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string (excluding the null terminator).
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Check if the current character is the null terminator (end of the string) */
		return (0);

	return (1 + _strlen_recursion(s + 1)); /* Recursively calculate the length of the string with the next character */
}
