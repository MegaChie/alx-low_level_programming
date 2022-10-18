#include <stdio.h>

int main(void)
{
unsigned long int a = 0;
unsigned long int s = 1;
unsigned long int d;
int f;
for (f = 1; f < 98; f++)
	{
	d = a + s; 
	a = s; 
	s = d; 
	printf("%lu, ", s);
	}
printf("\n");
return (0);
}
