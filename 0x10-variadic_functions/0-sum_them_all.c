#include "variadic_functions.h"
/**
 * sum_them_all - a Function that will return the sum of all its parameter
 * @n: the unsigned integer of the number of parameter passed
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
