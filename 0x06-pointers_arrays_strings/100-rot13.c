#include "main.h"
/**
 * *rot13 - updates the value of the variable
 * @ch: pointer to the variable to update
 * Return: the resulting string
 */
char *rot13(char *ch);
{
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, o;

for (i = 0; ch[i] != '\0'; i++)
{
for (o = 0; a[o] != '\0'; o++)
{
if (ch[i] == a[o])
{
ch[i] = b[o];
break;
}
}
}
return (ch);
}
