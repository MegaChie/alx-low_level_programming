#include <string.h>
#include <stdio.h>
/**
 * argstostr-  concatenates all the arguments of your program.
 * alloc_grid function. integers.
 * @ac: number of arguments
 * @av: arry of arrguments
 * Return: pointer or NULL
 */
char **strtow(char *str)
{
	char * token = strtok(str, " ");
   while( token != NULL ) {
      printf( " %s\n", token );
      token = strtok(NULL, " ");
   }
   return (str);
}
