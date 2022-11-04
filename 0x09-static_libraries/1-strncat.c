#include "main.h"
/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a, s;

for (a = 0; dest[a] != '\0'; a++)
{}
for (s = 0; s < n && src[s] != '\0'; s++)
{
dest[a] = src[s];
a++;
}
dest[a] = '\0';
return (dest);
}
