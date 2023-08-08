#include "main.h"
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

char *buffer;


buffer = malloc(sizeof(char) * 1024);


if (buffer == NULL)

{

dprintf(STDERR_FILENO,

"Error: Can't write to %s\n", file);

exit(99);

}


return (buffer);

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

int f, l, r, w;

char *buffer;


if (argc != 3)

{

dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");

exit(97);

}


buffer = create_buffer(argv[2]);

f = open(argv[1], O_RDONLY);

r = read(from, buffer, 1024);

l = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);


do {

if (f == -1 || r == -1)

{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
w = write(l, buffer, r);
if (l == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(f, buffer, 1024);
l = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buffer);
close_file(f);
close_file(l);
return (0);
}
