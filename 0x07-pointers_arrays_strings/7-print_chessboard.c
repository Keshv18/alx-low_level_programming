#include "main.h"

/**
 * print_chessboard - function with 1 argument
 * @a: char type pointer to an array as argument
 *
 * Description: prints the chessboard
 * Return: na
 */
void print_chessboard(char(*a)[8])
{
	int b;
	int c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
