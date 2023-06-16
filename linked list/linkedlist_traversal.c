#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next; // self referencing structure
};

// Making a function to traverse all the nodes one after another
void traverse(struct node* ptr)
{
    printf("Elements Found :");
    while(ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // allocating dynamic memory to nodes
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));    


    head->data = 0;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 2;
    third->next = fourth;


    fourth->data = 3;
    fourth->next = NULL;

    traverse(head);
}