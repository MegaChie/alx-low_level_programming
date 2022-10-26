#include "main.h"
/**
 * _strcmp - updates the value of the variable
 * @s1: pointer to the variable to update
 * @s2: pointer to the variable to update
 */
int _strcmp(char *s1, char *s2)
{
int a, s = 0, d, n = 0, f = 0;

for (a = 0; s1[a] != '\0'; a++)
{}
for (s; s2[s] != '\0'; s++)
if (a > s)
{
d = a;
}
else (s > a)
{
d = s;
}
while (n > d)
{
if (s1[n] > s2[n])
{
f++;
}
if (s2[n] > s1[n])
{
f--;
}
if (s1[n] == s2[n])
{}
n++;
}
return (f);
}
