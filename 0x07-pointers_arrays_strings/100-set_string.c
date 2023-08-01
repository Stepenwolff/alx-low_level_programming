#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to pointer that will be updated.
 * @to: Pointer to char, the value to set the pointer to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
