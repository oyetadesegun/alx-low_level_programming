#include "main.h"
/**
 * main - print last digit
 * Return k (Success)
 */
int print_last_digit(int i)
{
	int k;
	k = i % 10;
	if(i < 0)
		k = -k;
	return (k);
}
