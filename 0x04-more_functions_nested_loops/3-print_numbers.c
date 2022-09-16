#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: null return
 */

void print_numbers(void)
{
	int c = 0;

	do {
		_putchar(c + 48);
		c++;
	} while (c >= 0 && num <= 9);
	_putchar('\n');
}
