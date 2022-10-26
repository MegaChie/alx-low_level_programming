#include "main.h"
/**
 *string_toupper - updates the value of the variable
 * @a: pointer to the variable to update
 */
char *string_toupper(char *a)
{
int s,d;

for (s = 0; a[s] != '\0'; s++)
{
if (a[s] >= 'a' && a[s] >= 'z')
{
a[s] = a[s] - 32;
_putchar(a[s]);
}
return (a);
}
