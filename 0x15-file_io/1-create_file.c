#include "main.h"
/**
 * 
 */
int create_file(const char *filename, char *text_content)
{
	int myFile, letters, writing;

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
	for (letters = 0; text_content[letters]; letters++)
	{

	}
	writing = write(myFile, text_content, letters);
	if (writing == -1)
	{
		return (-1);
	}
	close(myFile);
	return(1);
}
