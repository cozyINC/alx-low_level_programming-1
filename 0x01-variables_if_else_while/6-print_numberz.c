#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int numb;

	for (numb = '0'; numb <= '9'; numb++)
		putchar(numb);
	putchar('\n');

	return (0);
}
