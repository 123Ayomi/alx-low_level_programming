#include "main.h"


/**
* create_file - Creates a func. that creates a file.
* @filename: The pointer to the name of the file .
* @text_content: The pointer to a string to write the file.
* Return: -1 if fn is NULL
*/

int create_file(const char *filename, char *text_content)

{

int hg, m, ayo = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (ayo = 0; text_content[ayo];)
ayo++;
}
hg = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
m = write(hg, text_content, ayo);
if (hg == -1 || m == -1)
return (-1);
close(hg);
return (1);
}
