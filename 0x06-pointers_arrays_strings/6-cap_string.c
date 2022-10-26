#include "main.h"
/**
 *string_toupper - updates the value of the variable
 * @a: pointer to the variable to update
 */
char *cap_string(char *a)
{
int s,d;

for (s = 0; a[s] != '\0'; s++)
{
if (a[s] == ' ')
{
if (a[s++] >= 'a' && a[s++] <= 'z')
{
a[s] = a[s] - 32;
_putchar(a[s]);
}
}
else if (a[0] >= 'a' && a[0] <= 'z')
{
a[0] = a[0] - 32;
_putchar(a[0]);
}
else
{
_putchar(a[s]);
}
}
