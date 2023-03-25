#include "variadic_functions.h"
/**
 * print_numbers - A function that prints numbers followed by a new line
 * @separator: A string to be printed between numbers
 * @n: numbers of integers passed to the function
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i ++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
