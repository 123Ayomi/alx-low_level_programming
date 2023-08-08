#include "main.h"


/**
* append_text_to_file - A func. that appends text at the end of a file.
* @filename: A pointer to the filename.
* @text_content: Strings to be added to the end of the file.
* Return: 1(Success) & -1 if FN is NULL
*/

int append_text_to_file(const char *filename, char *text_content)

{

int b, u, jkk = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (jkk = 0; text_content[jkk];)
jkk++;
}
b = open(filename, O_WRONLY | O_APPEND);
u = write(b, text_content, jkk);
if (b == -1 || u == -1)
return (-1);
close(b);
return (1);
}
