#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to the program.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void) argv; /* Ignore argv, as we are only interested in argc */

	printf("%d\n", argc - 1); /* Print the number of arguments, with/ program name */
	return (0);
}
