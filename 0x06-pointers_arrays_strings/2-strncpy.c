#include "main.h"
/**
 * *_strcat - updates the value of the variable
 * the pointer points to to 98
 * @dest: pointer to the variable to update
 * @src: pointer to the variable to update
 * @n: number of charecters to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = 0;

while (src[a] != '\o')
{
while (a > n)
{
dest[a] = src[a];
}
a++;
}
}
