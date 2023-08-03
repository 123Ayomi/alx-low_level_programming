#include "main.h"


/**
* get_bit - Func. that  returns the value of a bit at an index in a decimal number
* @n: A number to search
* @index: An index of the bit
* Return: A value of the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (l >> index) & 1;
return (bit_val);
}
