#include "main.h"

/**
 * _print_rev_recursion - Prints  reverse of a string.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
		return;

	_print_rev_recursion(s + 1); /* Recursive call with the next character */
	_putchar(*s); /* Print current character */
}
