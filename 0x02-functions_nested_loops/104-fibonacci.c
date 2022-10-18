#include <stdio.h>

int main(void)
{
int a = 0;
int s = 1;
int next;

for (a = 1; a < 98; a++)
	{
	next = a + s; 
	a = s; 
	s = next; 
	printf("%d, ", s);
	}
printf("\n");
return (0);
}
