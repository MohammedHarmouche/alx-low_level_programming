#include "main.h"

/**
   * create_file - function that will create a new file and fill it
     * @filename: name of the file to create.
      * @text_content: text to add to the new file.
       * Return: Always 1 on scucess, -1 on Failure
 	*/

int create_file(const char *filename, char *text_content)
{
	int opened, wrote, i, closing;

	if (filename == NULL)
		return (-1);
	opened = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (opened == -1)
		return (-1);
	if (text_content == NULL)
	{
		i = 0;
	}
	else
	{
		i = 0;
		while (text_content[i] != '\0')
			i++;
	}
	wrote = write(opened, text_content, i);
	if (wrote == -1)
		return (-1);
	closing = close(opened);
	if (closing == -1)
		return (-1);
	return (1);
}
