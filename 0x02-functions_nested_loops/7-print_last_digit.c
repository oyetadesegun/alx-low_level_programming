#include "main.h"
/**
 * print_last_digit  - print last digit
 * @i: the number in question
 * Return: k (Success)
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = *= -1;
	_putchar(k + '0');
	return (k);
}
