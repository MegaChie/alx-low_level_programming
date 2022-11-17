#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: what to be betwwen words
 * @n: The words
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *word;
	unsigned int a;

	va_start(strings, n);

	for (a = 0; a < n; a++)
	{
		word = va_arg(strings, char *);

		if (word == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", word);
		}
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
