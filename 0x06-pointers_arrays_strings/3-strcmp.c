#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: pointer to the variable to update
 * @s2: pointer to the variable to update
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
    if (*s1 == '\0')
    {
        return (0);
    }
    s1++;
    S2++;
}
return (*s1 - *s2)
}
