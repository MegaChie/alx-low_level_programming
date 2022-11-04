#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @args: argument count
 * @argv: arrgument vector
 * Return: This return to 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
