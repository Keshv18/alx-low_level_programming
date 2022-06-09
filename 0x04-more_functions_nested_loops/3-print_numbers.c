#include "main.h"

/**
 * print_numbers - function with no arguments
 *
 * Description: print numbers with using _putchar from 0 to 9
 * Return: 0 only
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}

	_putchar('\n');
}
