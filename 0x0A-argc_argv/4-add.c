#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Checks if a string contains only digits.
 * @str: The string to be checked.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str)) /* Loop through the string */
	{
		if (!isdigit(str[count])) /* Check if there are non-digit characters */
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Sums up integer arguments provided to the program.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 (Success) or 1 (Error).
 */
int main(int argc, char *argv[])
{
	int count, str_to_int, sum = 0;

	count = 1;

	while (count < argc) /* Iterate through the arguments array */
	{
		if (check_num(argv[count])) /* Check if the argument is a number */
		{
			str_to_int = atoi(argv[count]); /* Convert the string to an integer using ATOI */
			sum += str_to_int;
		}
		else /* If one of the arguments contains non-digit characters */
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}

	printf("%d\n", sum); /* Print the sum of the integers */
	return (0);
}
