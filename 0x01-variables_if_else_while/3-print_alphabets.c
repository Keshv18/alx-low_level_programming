#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
        char letter[] = "abcdefghijklmnopqrstuvwyzABCDEFGHIJKLMNOPQRSTUVWYZ";
        int i;

        for (i = 0; i <= 51; i++)
        {
                putchar(letter[i]);
        }
        putchar('\n');
        return (0);
}

