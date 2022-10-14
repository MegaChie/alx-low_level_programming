#include <stdio.h>
#include <unistd.h>
 /**
 * main - prints text followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
write(4, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
