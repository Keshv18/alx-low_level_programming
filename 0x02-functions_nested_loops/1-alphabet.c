#include "main.h"

/**
 * print_alphabet - check the code for Coding School students.
 *
 * Description: Print lower case alphabet from a - z
 * Return: Always 1.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
