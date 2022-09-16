#include "main.h"
/**
 * print_number - prints an int
 * @n: number to tbe printed
 */
void print_number(int n)
{
	unsigned int num = n;

	/*first check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	/*print the first few digits*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*print the last digit*/
	_putchar((num % 10) + 48);
}
{
	int count = 0;

	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}
