#include "main.h"

/**
 * print_most_numbers - print number from 0 to 0 excluding 2 and 4
 *
 * Return: null return
 */

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number == 2 || number == 4)
			continue;
		_putchar(number);
	}
	_putchar('\n')
}
