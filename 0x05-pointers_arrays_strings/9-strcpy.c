#include "main.h"
/**
 * *_strcpy - prints n elements of an array of integers, followed by a new
 * line
 * @dest: pointer for the des char
 * @src: pointer for the sor char
 */
char *_strcpy(char *dest, char *src)
{
int n, s;

for (n = 0; src[n] != '\0'; n++)
{
}
for (s = 0; s < n; s++)
{
dest[s] = src[s];
}
dest[s] = '\0';
return (dest);
}
