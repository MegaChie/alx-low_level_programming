#include "main.h"
/**
 * _atoi - prints n elements of an array of integers, followed by a new
 * line
 * @s: pointer for the sor char
 */
int _atoi(char *s)
{
int n, a, x = 0, n;
char d;

for (n = 0; s[n] != '\0'; n++)
{}
for (a = 0; s[a] >= 'a' && s[a] <= 'z'; a++)
{}
for (a = 0; s[a] >= 'A' && s[a] <= 'Z'; a++)
{}
for (a = 0; s[a] == '-'; a++)
{
    d[x] = s[a];
    x++;
    if (s[a++] >= '0' && s[a++] <= '9')
    {
        d[x] = s[a++];
        x++;
        for (n = a; s[n] >= '0' && n <= '9')
        {
            d[x] = s[n];
            x++;
        }
    }
    else if (s[a++] >= 'a' && s[a++] <= 'z')
    {}
    else if (s[a++] >= 'A' && s[a++] <= 'Z')
    {}
}
}
