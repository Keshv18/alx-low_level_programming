#include "main.h"
#include <studi.h>
/**
 * _isupper - function with 1 int type argument
 * @c: int type argument with char input
 * Return: Always 0 (Success) 
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
} 
