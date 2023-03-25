#include "variadic_functions.h"
/**
 * print_all - A function that prints anything
 * @format: a list of types of arguments passed to the function
 * Return: Always 0
 */
void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *str;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, int));
				flag = 0;
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
