#include <unistd.h>
#include "main.h"
#include "_putchar.c"

/**
 * main - check the code
 *
 * Return: ALways 0.
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
	_putchar('\n');
}
