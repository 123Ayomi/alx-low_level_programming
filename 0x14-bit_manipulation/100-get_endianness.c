#include "main.h"


/**
* get_endianness - Func. that checks if a machine is little or big endianness.
* Return: 0 for big, 1 for little endian
*/

int get_endianness(void)
{
unsigned int k = 1;
char *r = (char *) &k;
return (*r);
}
