#include "main.h"

/**
 * _strspn - Get the length of a prefix substring.
 * @s: Pointer to the input string.
 * @accept: Pointer to the string containing the characters to be matched.
 *
 * Return: The number of characters in the initial segment of @s which consist
 *         only of characters from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int n = 0;
    int r;

    while (*s)
    {
        for (r = 0; accept[r]; r++)
        {
            if (*s == accept[r])
            {
                n++;
                break;
            }
            else if (accept[r + 1] == '\0')
            {
                return (n);
            }
        }
        s++;
    }

    return (n);
}
