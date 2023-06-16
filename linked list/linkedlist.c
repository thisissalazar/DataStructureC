#include <stdio.h>
#include <stdlib.h>

// implementation of a linked list
int errors = 1; // 1= script didn' load successfully.
int status = 0; // 0= inactive | 1= active
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

void OnScriptInit()
{
    printf("allocating dynamic memory to nodes...\n");
    // making nodes with the help of self referential structure
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // allocating dynamic memory to nodes
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));    

    printf("Linking nodes...\n");
    head->data = 0;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 2;
    third->next = fourth;


    fourth->data = 3;
    fourth->next = NULL;

    traverse(head);
    errors = 0;
    status = 1;
}

void linking()
{
    // Fn not defined yet.
}

void main()
{
    printf("Initializing script...\n");
    OnScriptInit();
    if (errors != 0)
    {
        printf("Failed to load the script.\n");
    }
    else
    {
        printf("Script loaded successfully\t");
    }
    printf("Script Status: %d", status);

}