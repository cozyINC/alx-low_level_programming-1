#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int numb;
	int numb1;

	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb);
		for (numb1 = '0'; numb1 <= '9'; numb1++)
		{
			if (numb != numb1)
			{
				putchar(numb1);
				{
					if (numb1 != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
