#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: calc value
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list values;
	unsigned int a, sum = 0;

	va_start(values, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(values, int);
	}
	va_end(values);
	return (sum);
}
