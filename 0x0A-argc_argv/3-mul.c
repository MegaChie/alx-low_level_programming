#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: arrgument vector
 * Return: This return to 0
 */
int main(int argc, char *argv[])
{
	int mull;
	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}
	mull = atoi(argv[1]) * atoi(argv[2]);
	printf("%d", mull);
	return (0);
}
