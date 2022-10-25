#include "main.h"
/**
 * _atoi - prints n elements of an array of integers, followed by a new
 * line
 * @s: pointer for the sor char
 */
int _atoi(char *s)
{
int n, a = 0, c = 0;
char x;

for (n = 0; s[n] != '\0'; n++)
{}
while (a < n)
{
    if (s[a] == '-')
    {
        x[c] = s[a];
        c++;
        while (s[a++] <= '0' && s[a++] >= '9')
        {
            x[c] = s[a];
            c++;
            a++;
        }
    }
    else if (s[a] <= '0' && s[a] >= '9')
    {
        x[c] = s[a];
        c++;
        while (s[a++] <= '0' && s[a++] >= '9')
        {
            x[c] = s[a];
            c++;
            a++;
        }

    }
    else
    {}
    a++;
}
return (0);
}
