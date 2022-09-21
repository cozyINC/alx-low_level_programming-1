#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 */
void print_square(int size)
{
	int n, number;

	if (size > 0)
	{
		for (n = 0; n < size; n++)
		{
			for (number = 0; number < size; number++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
