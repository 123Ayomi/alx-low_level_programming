#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - It prints all elements of a list
* @h: Linked list
* Return: Number of nodes (Success)
*/

size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);

h = h->next;
count++;
}

return (count);
}
