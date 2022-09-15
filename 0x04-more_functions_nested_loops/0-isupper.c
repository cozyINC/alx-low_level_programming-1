#include "main.h"
#include <stdio.h>

/**
 * _idupper - function to check if character is uppercase
 *
 * @c: checks input of information
 *
 * Return: 1 if 'c' is uppercase
 *
 * otherwise always 0 (success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
