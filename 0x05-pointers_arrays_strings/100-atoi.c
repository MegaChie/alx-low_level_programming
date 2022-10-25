#include "main.h"
/**
 * _atoi - prints n elements of an array of integers, followed by a new
 * line
 * @s: pointer for the sor char
 */
int _atoi(char *s)
{
int n, a, x = 0, b;
char d;
char *r = &d;
for (n = 0; s[n] != '\0'; n++)
{}
for (a = 0; s[a] >= 'a' && s[a] <= 'z'; a++)
{}
for (a = 0; s[a] >= 'A' && s[a] <= 'Z'; a++)
{}
for (a = 0; s[a] == '-'; a++)
{
r[x] = s[a];
x++;
if (s[a++] >= '0' && s[a++] <= '9')
{
r[x] = s[a++];
x++;
for (b = a; s[b] >= '0' && s[b] <= '9'; b++)
{
r[x] = s[b];
x++;
}
}
else if (s[a++] >= 'a' && s[a++] <= 'z')
{}
else if (s[a++] >= 'A' && s[a++] <= 'Z')
{}
}
for (x = 0; r[x] != '\0'; x++)
{
_putchar(r[x]);
}
return (0);
}
