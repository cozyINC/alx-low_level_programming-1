#include <stdio.h>

/**
 * main - start point
 *
 * Return: 0 if code executes
 */

int main(void)
{
	char *sh = "main";

	while (*sh)
	{
		putchar(*sh);
		sh++;
	}
	putchar('\n');

	return (0);
}
