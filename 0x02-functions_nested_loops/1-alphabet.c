#include <unistd.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: ALways 0.
 */
int main(void)

{
	char n = 'a';

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
