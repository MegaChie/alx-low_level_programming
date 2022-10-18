#include <stdio.h>

int main(void)
{
long long int a = 0;
long long int s = 1;
long long int d;
int f;
for (f = 1; f < 98; f++)
	{
	d = a + s; 
	a = s; 
	s = d; 
	printf("%lld, ", s);
	}
printf("\n");
return (0);
}
