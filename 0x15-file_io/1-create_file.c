#include "main.h"
/**
 * 
 */
int create_file(const char *filename, char *text_content)
{
	int myFile, letters, permission;

	if (filename == 0)
	{
		return (-1);
	}
	myFile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (myFile == 0)
	{
		return (-1);
	}
	if (text_content == 0)
	{
		text_content = "";
	}
}
