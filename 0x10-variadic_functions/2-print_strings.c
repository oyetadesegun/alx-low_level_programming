#include "variadic_functions.h"
/**
 * print_strings - A function that prints stings followed by a new line
 * @separator: a string to be printed between strings
 * @n: number of strings passed to the function
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			printf("(nil)");
		printf("%s",str);
		if(i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
