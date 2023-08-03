#include "main.h"


/**
* flip_bits - Func. that counts the number of bits to change
* to get from one number to another
* @n: the first number
* @m: the second number
* Return: number of bits to change (Success)
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (k = 63; k >= 0; k--)
{
current = exclusive >> k;
if (current & 1)
count++;
}
return (count);
}
