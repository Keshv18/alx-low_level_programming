#include "main.h"

/**
 * _puts - function with one argument
 * @str: one char type argument
 *
 * Description: print a string follow by a new line to stdout
 * Return: none
 */
void _puts(char *str)
{
	int next = 0;

	while (str[next] != '\0')
	{
		_putchar(str[next]);
		next++;
	}
	_putchar(10);
}
