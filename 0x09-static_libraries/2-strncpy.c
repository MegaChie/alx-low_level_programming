#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
int v;

v = 0;
while (src[v] != '\0' && v < n)
{
dest[v] = src[v];
v++;
}
while (v < n)
{
dest[v] = '\0';
v++;
}
return (dest);
}
