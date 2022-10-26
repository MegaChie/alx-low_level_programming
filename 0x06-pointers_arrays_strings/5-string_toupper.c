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
_putchar(s[a] + '32');
}
else
{
_putchar(s[a]);
}
}
return (0);
}
