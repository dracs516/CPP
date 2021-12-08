// creating a linked list logic

#include <stdio.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main()
{
    node *list = NULL;

    node *n = malloc(sizeof(node));
    if (n != NULL)
    {
        // (*n).number=1;
        n->number = 1;
        n->next = NULL;
    }
    list = n;

    node *n = malloc(sizeof(node));
    if (n != NULL)
    {
        // (*n).number=2;
        n->number = 2;
        n->next = NULL;
    }
    list->next = n;

    node *n = malloc(sizeof(node));
    if (n != NULL)
    {
        // (*n).number=3;
        n->number = 3;
        n->next = NULL;
    }
    list->next->next = n;
}