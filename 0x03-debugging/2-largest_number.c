#include "main.h"
/**
 * largest_number - returns the largest of 3numbers
 * @a: 1st int
 * @b: 2ns int
 * @c: 3rd int
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
