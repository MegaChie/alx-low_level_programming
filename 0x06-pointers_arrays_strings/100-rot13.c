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
int i = 0,o = 0;

while (ch[i] != '\0')
{
while(a[o] != '\0')
{
if (ch[i] == a[o])
{
ch[i] = b[o];
break;
}
o++;
}
i++;
}
return (ch);
}
