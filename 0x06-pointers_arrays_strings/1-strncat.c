#include "main.h"
/**
 * *_strcat - updates the value of the variable
 * the pointer points to to 98
 * @dest: pointer to the variable to update
 * @src: pointer to the variable to update
 * @n: number of charecters to copy
 */
char *_strncat(char *dest, char *src, int n)
{
int a, s;

for (a = 0; dest[a] != '\0'; a++)
{}
for (s = 0; s < n; s++)
{
dest[a] = src[s];
a++;
}
dest[a] = '\0';
return (dest);
}
