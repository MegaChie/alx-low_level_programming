#include "main.h"
/**
 * *rot13 - updates the value of the variable
 * @ch: pointer to the variable to update
 * Return: the resulting string
 */
char *rot13(char *ch);
{
int i;

while (ch[i] != '\0')
{
if ((ch[i] <= 'a' && ch[i] >= 'z') || (ch[i] <= 'A' && ch[i] >= 'Z'))
{
ch[i] = ch[i] - 13;
}
i++;
}
return (ch);
}
