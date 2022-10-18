#include <stdio.h>

int main(void)
{
int a, s;

s = 1;
printf("%d", s);
for (a = 1; a < 98; a++)
	{
	s = s + a;
	printf("%d, ", s);
	}
printf("\n");
return (0);
}
