#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
unsigned long int i, j, k, next;

j = 1;
k = 2;

for (i = 1; i <= 50; i++)
{
if (j != 20365011074)
{
printf("%ld, ", j);
}
else
{
printf("%ld\n", j);
}
next = k + j;
j = k;
k = next;
}
return (0);
}
