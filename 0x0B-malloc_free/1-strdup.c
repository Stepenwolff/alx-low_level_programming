#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Creates a duplicate of a string in a new memory location.
 * @str: The string to duplicate.
 *
 * Return: Pointer to newly allocated memory with the duplicated string,
 *         or NULL if memory allocation fails or if 'str' is NULL.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
		return (NULL);

	for (length = 0; str[length]; length++)
		duplicate[length] = str[length];

	return (duplicate);
}
