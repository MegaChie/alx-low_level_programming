#include <string.h>
#include "main.h"
/**
 * _strlen_recursion -  returns the length of a string.
 * @s: pointer to string
 * Return: lenght of string.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		retrutn (1);
	}
	else
	{
		return (factorial(n) * factorial(n - 1));
	}
}
