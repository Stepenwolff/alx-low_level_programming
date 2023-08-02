#include "main.h"

/**
 * reverse_print - Prints a string in reverse using recursion.
 * @s: The string to be printed in reverse.
 */
void reverse_print(char *s)
{
	if (*s == '\0') /* Base case: end of the string */
		return;

	reverse_print(s + 1); /* Recursive call with the next character */
	_putchar(*s); /* Print the current character */
}
