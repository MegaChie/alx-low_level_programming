#include <string.h>
#include "main.h"
/**
 * factorial -  returns the factorial of number.
 * @n: number to calculate fatorial for
 * Return: factorial.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (i * factorial(i - 1));
	}
}
