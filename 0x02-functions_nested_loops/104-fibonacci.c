#include <stdio.h>

int main(void)
{
long int a = 0;
long int s = 1;
double int d;
int f;
for (f = 1; f < 98; f++)
	{
	d = a + s; 
	a = s; 
	s = d; 
	printf("%ld, ", s);
	}
printf("\n");
return (0);
}
