#include "main.h"

/**
 * print_most_numbers - print number from 0 to 0 excluding 2 and 4
 *
 * Return: null return
 */

void print_most_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		if (number != 50 && number != 52)
		{
			_putchar(number);
		}
	}
	_putchar('\n')
}
