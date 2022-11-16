#include "3-calc.h"
/**
 * op_add - return the sum of 2 numbers.
 * @a: number
 * @b: number
 * Return: calc value
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference of 2 numbers
 * @a:  number
 * @b: number
 * Return: calc value
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product of two numbers.
 * @a: number
 * @b: number
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the quotient of 2 numbers.
 * @a: number
 * @b: number
 * Return: calc value
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns the remainder of division.
 * @a: number
 * @b: number
 * Return: calc value
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
