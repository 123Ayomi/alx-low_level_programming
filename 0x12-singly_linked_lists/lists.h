#ifndef _LINKED_LIST
#define _LINKED_LIST

/**
* struct list_s - The singly linked list
* @str: string - (malloc'ed string)
* @len: A length of the string
* @next: The points to the next node
* Description: A singly linked list node structure
* for alx project Assignment
*/

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _strlen(const char *s);
size_t print_list(const list_t *h);

#endif
