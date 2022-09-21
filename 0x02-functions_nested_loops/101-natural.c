#include"main.h"

/**
 * main - Entry point
 * Description: computes the sum of all
 * the multiples of 3 or 5
 * below 1024 (excluded)
 * Return: Always 0 (Success)
 */
int main(void)
{
	sum_multiple_3_5(1024);
	return (0);
}

void sum_multiple_3_5(int n)
{
	int sum = 0;

	for (n = n - 1; n >= 0; n--)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
			sum = sum + n;
	}
	printf("%d\n", sum);
}
