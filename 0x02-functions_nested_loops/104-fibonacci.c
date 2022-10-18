#include <stdio.h>

int main(void)
{
int a = 0;
int s = 1;
int d;
int f;
for (f = 1; f < 98; f++)
	{
	d = a + s; 
	a = s; 
	s = d; 
	printf("%d, ", s);
	}
printf("\n");
return (0);
}
