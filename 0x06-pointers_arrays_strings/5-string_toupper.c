#include "main.h"
/**
 *string_toupper - updates the value of the variable
 * @a: pointer to the variable to update
 * Return: the resulting string
 */
char *string_toupper(char *a)
{
int s;

for (s = 0; a[s] != '\0'; s++)
{
if (a[s] >= 'a' && a[s] <= 'z')
{
a[s] = a[s] - 32;
}
}
return (a);
}
