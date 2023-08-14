#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates specified size array with a given character.
 * @size: The size of the array.
 * @c: The character to assign.
 *
 * Description: Dynamically allocates memory for an array of size 'size'
 *              and initializes all elements with the character 'c'.
 *
 * Return: A pointer to the created array, or NULL if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
