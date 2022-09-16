#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 - 14
 * _putchar only 3 times
 * Return: 0-14 10 times followed by new line
 */
void more_numbers(void)
{
	int i, mul, x;

	for (mul = 1; mul <= 10; ++mul)
	{
		for (x = 0; x <= 14; ++x)
		{
			i = x
			if (x > 9)
			{
				_putchar( 1 + 48);
				i = x % 10;
			}
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}
