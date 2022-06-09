#include "main.h"

/**
 * print_most_numbers - function with no arguments
 *
 * Description: print 0 - 9 follow by a new line using while loop and _putchar
 * Return: void
 */
void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}

	_putchar('\n');
}
