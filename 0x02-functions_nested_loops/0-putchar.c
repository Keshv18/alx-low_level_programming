#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z;
	char zString[10] = "\_putchar\n";

	while (z < 10)
	{
		_putchar(zString[z]);
		z++;

	}
	return (0);
}
