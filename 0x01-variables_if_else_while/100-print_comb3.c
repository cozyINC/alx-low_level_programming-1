#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int numb = 0;
	int numb1;

	while (numb <= 9)
	{
		numb1 = 0;
		while (numb1 <= 9)
		{
			if (numb != numb1 && numb < numb1)
			{
				putchar(numb + 48);
				putchar(numb1 + 48);
					if (numb + numb1 != 17)
					{
						putchar(',');
						putchar(' ');
					}
				}
			++numb1;
		}
		++numb;
	}
	putchar('\n');

	return (0);
}
