:#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);


/**
* create_buffer - For buffers llocates 1024 bytes .
* @file: The filename buffer stores chars for.
* Return: (Success)
*/

char *create_buffer(char *file)

{

char *BF;
BF = malloc(sizeof(char) * 1024);
if (BF == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (BF);
}
/**
* close_file - File descriptors will be closed.
* @fd: File descriptor closed
*/

void close_file(int fd)

{

int p;
p = close(fd);
if (p == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
* main - Prog to copies the contents of a file to another file.
* @argc: Number of arguments it supplies to the program.
* @argv: Array of pointers towards the arguments.
* Return: 0(success).
* Description: If the argument count is incorrect - exit code 97.
* If file_from does not exist or cannot be read - exit code 98.
* If file_to cannot be created or written to - exit code 99.
* If file_to or file_from cannot be closed - exit code 100.
*/

int main(int argc, char *argv[])

{

int love, no, p, b;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
love = open(argv[1], O_RDONLY);
p = read(love, buffer, 1024);
no = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (love == -1 || p == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]free(buffer);
exit(98);
}
b = write(to, buffer, p);
if (no == -1 || b == -1)
{dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
p = read(love, buffer, 1024);
no = open(argv[2], O_WRONLY | O_APPEND);
} while (p > 0);
free(buffer);
close_file(love);
close_file(no);
return (0);
}
