#include "lists.h"


/**
* print_listint - It prints all the elements of a linked list
* @h: And linked list of type listint_t to print
* Return: number of nodes (Success)
*/

size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (y)
{
printf("%d\n", y->n);
num++;
y = y->next;
}
return (num);
}
