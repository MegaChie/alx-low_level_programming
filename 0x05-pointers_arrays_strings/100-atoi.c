#include "main.h"
/**
 * _atoi - prints n elements of an array of integers, followed by a new
 * line
 * @s: pointer for the sor char
 */
int _atoi(char *s)
{
int n, h, d = 0, g = 0;
char f;
char *j = &f;

for (n = 0; s[n] != '\0'; n++)
{
}
for (h = 0; h < n; h++)
    if (s[h] == '-' || s[h] == '+')
    {
        j[g] = s[h];
    }
    else if (s[h] >= 0 && s[h] <= 9)
    {
        j[g] = s[h];
        g++;
    }
    else if (s[h] == '\0')
    {}
    else ((s[h] >= 'a' && s[h] <= 'z') || s[h] >= 'A' && s[h] <= 'Z')
    {}

}
