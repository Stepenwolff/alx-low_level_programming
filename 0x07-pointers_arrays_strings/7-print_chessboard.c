#include "main.h"

/**
 * print_chessboard - Print a chessboard.
 * @a: 2D array representing the chessboard.
 *
 * Return: void (No return value).
 */
void print_chessboard(char (*a)[8])
{
    int i;
    int j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
            _putchar(a[i][j]);

        _putchar('\n');
    }
}
