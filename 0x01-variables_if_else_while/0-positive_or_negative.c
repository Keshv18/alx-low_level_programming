#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main-void 
 *
 * printf will print a number whether positive or negatavie or zero
 *
 * return: Always 0(success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		else
		{
			printf("%d is zero\n", n);
		}
	}
	return (0);
}

