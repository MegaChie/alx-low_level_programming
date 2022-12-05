#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int myFile;
	ssize_t isread, iswrite;
	char *hold;

	if (filename == 0)
	{
		return (0);
	}
	myFile = open(filename, O_RDONLY);
	if (myFile == -1)
	{
		return (0);
	}

}
