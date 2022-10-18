#include <stdio.h>

int main(void)
{
int a = 0;
int s = 1;
int d;

for (a = 1; a < 98; a++)
	{
	d = a + s; 
	a = s; 
	s = d; 
	printf("%d, ", s);
	}
printf("\n");
return (0);
}
