#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: arrgument vector
 * Return: This return to 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
