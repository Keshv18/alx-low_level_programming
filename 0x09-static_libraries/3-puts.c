#include "main.h"
/*
 * Empty file
 * _puts always zero
 * return: 0
 */
void _puts(char *s)
{
        int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
