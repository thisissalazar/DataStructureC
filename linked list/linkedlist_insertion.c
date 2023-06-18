// There are 4 types of insertion.
// #Insertion at the beginning
// #Insertion in between
// #Insertion at the end
// #Insertion after a node

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node* ptr)
{
    // printf("Elements Found :");
    while(ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}
//Function for Insertion at the beginning
struct node * InsertAtFirst(struct node *head, int data){
    struct node * ptr =(struct node *) malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

//Function for Insertion in between of nodes
struct node * InsertAtIndex(struct node *head, int data, int index)
{
    struct node * ptr =(struct node*)malloc(sizeof(struct node));
    struct node * p = head;
    int i=0;

    while(i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

}

//Insertion at the end of the last node
struct node * InsertAtEnd(struct node *head, int data){
    struct node * ptr =(struct node *) malloc(sizeof(struct node));
    struct node * p = head;
    ptr->data = data;
    
    while(p->next!=NULL)
    {
        p = p->next;
    }
    p->next =ptr;
    ptr->next=NULL;
    return head;
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
    printf("\nBefore Insertion\t");
    traverse(head);//displaying before insertion
    //head = InsertAtFirst(head, 1337); //Insertion in beginning
    //head = InsertAtIndex(head, 40, 1);//Insertion in between
    head = InsertAtEnd(head, 69);//Insertion at End
    printf("\n\nAfter Insertion\t");
    traverse(head);//displaying after insertion
    return 0;
}
