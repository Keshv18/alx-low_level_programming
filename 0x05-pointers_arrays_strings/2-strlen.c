#include "main.h"
#include <stdio.h>
/**
 * _strlen - check the code for ALX School students.
 * @s: Input string pointer
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
