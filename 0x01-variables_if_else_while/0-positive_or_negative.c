#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - void 
 *
 * printf will print a number whether positive or negatavie or zero
 *
 * return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf ("%d is %s\n", n, ((n>0) ? "postive" : (n<0) ? "negative" : zero);
	return (0);
}

