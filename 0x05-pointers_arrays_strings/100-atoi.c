#include "main.h"
/**
 * _atoi - prints n elements of an array of integers, followed by a new
 * line
 * @s: pointer for the sor char
 */
int _atoi(char *s)
{
int n, a = 0, x = 0, *v = &x;

for (n = 0; s[n] != '\0'; n++)
{}
while (a < n)
{
    if (s[a] == '-')
    {
        x = v[a];
        a++;
        while (s[a++] <= '0' && s[a++] >= '9')
        {
            v = s[a];
            d++;
            a++;
        }
    }
    else if (s[a] <= '0' && s[a] >= '9')
    {
        x = v[a];
        x++;
        while (s[a++] <= '0' && s[a++] >= '9')
        {
            x = v[a];
            x++;
        }

    }
    else
    {}
    a++;
}
return (v);
}
