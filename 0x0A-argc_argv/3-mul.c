#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: arrgument vector
 * Return: This return to 0
 */
int main(int argc, char *argv[])
{
	int mull = 1, num;
	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}
	for (num = 1; num < argc; num++)
	{
		mull = mull * atoi(argv[num]);
	}
	printf("%d\n", mull);
	return (0);
}
