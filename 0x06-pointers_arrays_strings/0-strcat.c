#include "main.h"
/**
 * *_strcat - updates the value of the variable
 * the pointer points to to 98
 * @dest: pointer to the variable to update
 * @src: pointer to the variable to update
 */
char *_strcat(char *dest, char *src)
{
int a, s;

for (a = 0; dest[a] != '\0'; a++)
{}
for (s = 0; src[s] != '\0'; s++)
{
dest[a] = src[s];
a++;
}
dest[a] = '\0';
return (dest);
}
