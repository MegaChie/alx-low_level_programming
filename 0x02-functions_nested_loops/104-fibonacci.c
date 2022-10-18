#include <stdio.h>

int main(void)
{
int a = 1;
int s = 2;
int next;

for (a = 1; a < 98; a++)
	{
	a = a + s; 
	a = s; 
	s = next; 
	printf("%d, ", s);
	}
printf("\n");
return (0);
}
