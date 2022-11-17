#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: what to type inbetween numbers
 * @n: numbers to type
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int index;

	va_start(num, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(num, int));
		if (separator != 0 && index != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
