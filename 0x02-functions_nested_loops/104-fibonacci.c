#include <stdio.h>

int main(void)
{
int a = 1, s = 2, next;

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
