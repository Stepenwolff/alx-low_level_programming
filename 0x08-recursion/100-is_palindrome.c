#include "main.h"

int check_palindrome(char *s, int i, int len);
int _strlen_recursively(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked for palindrome.
 *
 * Return: 1 if it is a palindrome, 0 if it's not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	return (1);
	return (check_palindrome(s, 0, _strlen_recursively(s)));
}

/**
 * _strlen_recursively - Returns the length of a string using recursion.
 * @s: The string to calculate the length of.
 *
 * Return: Length of the string.
 */
int _strlen_recursively(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursively(s + 1));
}

/**
 * check_palindrome - Checks the characters recursively for palindrome.
 * @s: The string to check for palindrome.
 * @i: Iterator.
 * @len: Length of the string.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	return (0);
	if (i >= len)
	return (1);
	return (check_palindrome(s, i + 1, len - 1));
}
