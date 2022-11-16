#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform.
 * @s: operator
 * Return: function or 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a;

	a = 0;
	while (a < 5)
	{
		if (s[0] == ops[a].op[0])
		{
			return (ops[a].f);
		}
		a++;
	}
	return (NULL);
}
