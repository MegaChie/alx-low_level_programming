#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: arrgument vector
 * Return: This return to 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argc;
	return (0);
}
