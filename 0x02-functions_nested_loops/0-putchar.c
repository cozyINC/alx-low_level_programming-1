#include "unistd.h"
#include "main.h"

/**
 * main - start point
 *
 * Return: 0 if code executes
 */

int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
