#include "main.h"
#include <stdlib.h>


/**
* read_textfile - A func. that read text file and prints to standoutp.
* @filename: The text file being read
* @letters: A number of letters to be read
* Return: 0 if filename is NULL and file can,t be open or read
*/

ssize_t read_textfile(const char *filename, size_t letters)

{

char *yup;
ssize_t lp;
ssize_t r;
ssize_t c;
lp = open(filename, O_RDONLY);
if (lp == -1)
return (0);
yup = malloc(sizeof(char) * letters);
c = read(lp, yup, letters);
r = write(STDOUT_FILENO, yup, c);
free(yup);
close(lp);
return (r);
}
