#include "main.h"
/**
 * _atoi - prints n elements of an array of integers, followed by a new
 * line
 * @s: pointer for the sor char
 */
int _atoi(char *s)
{
int n, a = 0;
char x, *d = &x;

for (n = 0; s[n] != '\0'; n++)
{}
while (a < n)
{
    if (s[a] == '-')
    {
        x[d] = s[a];
        d++;
        while (s[a++] <= '0' && s[a++] >= '9')
        {
            x[d] = s[a];
            d++;
            a++;
        }
    }
    else if (s[a] <= '0' && s[a] >= '9')
    {
        x[d] = s[a];
        d++;
        while (s[a++] <= '0' && s[a++] >= '9')
        {
            x[d] = s[a];
            d++;
            a++;
        }

    }
    else
    {}
    a++;
}
while (x[d] != '\0')
{
    _putchar(x)
}
return (0);
}
