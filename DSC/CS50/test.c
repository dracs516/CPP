#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} ab;
void getdata(ab *a)
{
    printf("enter the data you want to input in the node\n");
    scanf("%d", &a->data);
    a->next = NULL;
}
void print(ab *c)
{
    ab *ran;
    ran = c;
    while (ran != NULL)
    {
        printf("%d  ", ran->data);
        ran = ran->next;
    }
}
void push(ab *temp)
{
    ab *newest;
    newest = malloc(sizeof(ab));
    printf("enter the value you want to input in the linked list as the stack logic\n");
    scanf("%d", &newest->data);
    newest->next = NULL;
    temp->next = newest;
    temp = newest;
}
int main()
{
    int n;
    printf("enter the total number of nodes you want\n");
    scanf("%d", &n);
    ab *head, *new, *temp;
    head = malloc(sizeof(ab));
    getdata(head);
    temp = head;
    for (int i = 1; i <= n; i++)
    {
        new = malloc(sizeof(ab));
        getdata(new);
        temp->next = new;
        temp = temp->next;
    }
    print(head);
    char b;
    printf("do you want to add another value in the node or not?\n");
    scanf("%c", &b);
    if (b == 'y' || b == 'Y')
    {
        push(temp);
    }
    else
    {
        printf("i know you dont want to push anything so i shall not ask you for anything\n");
    }
    print(head);
    return 0;
}