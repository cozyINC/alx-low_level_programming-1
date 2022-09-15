#include "main.h"
/**
 * print_diagonal - draws a driagonal lne on the terminal.
 * @n: the number of the times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i;
	int d = 0;

	if (n > 0)
	{
		while (d != n)
		{
			for (i = 0; i < d; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			d++;
		}
	}
	else
		_putchar('\n');
}
