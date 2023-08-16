#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a pointer to a function.
 * @name: The string to be printed.
 * @f: A pointer to the function that prints the string.
 *
 * Description: This function takes a string and a pointer to a function.
 * If the name and function pointer are not NULL, it calls the function
 * to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
