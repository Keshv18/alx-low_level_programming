#include "main.h"

/**
 * _strcpy - function with two arguments
 * @dest: 1st argument char type pointer
 * @src: 2nd argument char type pointer
 *
 * Description: copies the string to an array
 * Return: na
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;
	int i;

	while (src[counter] != 0)
		counter++;
	for (i = 0; i < counter; i++)
		dest[i] = src[i];
	return (dest);
}
