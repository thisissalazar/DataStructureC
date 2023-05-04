//
//-------------Headers------------//
#include <stdio.h>
#include <stdlib.h>

//----------Definitions-----------//
#define MAX 50

//--------------------------------//
int queue[MAX];
int front = -1;
int rear = -1;

//-----------Function Declaration----------// 

void enqueue(int item)
{
    /*If the queue is full, an overflow function/statement will be initialized*/    
    if((front == 0 && rear == MAX-1) || (front == rear+1))
    {    
        printf("Queue Overflow \n"); 
        return;
    }
    /*If the front of the queue is at its default value i.e -1,
    then rear and front both will be set to 0*/
    if(front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if(rear == MAX-1)
            rear = 0;
        else
            rear = rear+1;
    }
    queue[rear] = item ;
}

//---------------------------------//

void deletion()
{
    if(front == -1)
    {
        printf("Queue Underflow\n");
        return ;
    }
    printf("Element deleted from queue is : %d \n",queue[front]);
    if(front == rear)
    {
        front = -1;
        rear=-1;
    }
    else
    {
        if(front == MAX-1)
        front = 0;
    else
        front = front+1;
    }
}

void display()
{
    int front_pos = front,rear_pos = rear;
    if(front == -1)
    {
        printf("Queue is empty\n");
    return;
    }
    printf("Queue elements :\n");
    if( front_pos <= rear_pos )
    while(front_pos <= rear_pos)
    {
        printf("%d ",queue[front_pos]);
        front_pos++;
    }
    else
    {
        while(front_pos <= MAX-1)
        {
            printf("%d ",queue[front_pos]);
            front_pos++;
        }
    front_pos = 0;
        while(front_pos <= rear_pos)
        {
            printf("%d ",queue[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}


int main()
{
    int choice,item;
    do
    {
        printf("Enter the number to execute a function.\n");
        printf("Insert element to queue (1)\n");
        printf("Delete element from queue (2) \n");
        printf("Display all elements of queue (3)\n");
        printf("Exit (4)\n------------------------------------------------\n\n");
        printf("Awaiting Input: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
                printf("Input the element for insertion in queue : ");
                scanf("%d", &item);
                insert(item);
                break;

            case 2 :
                deletion();
                break;
                display();
                break;

            case 4:
                break;
                default:
                printf("Wrong choice\n");
        }
    }
    while(choice!=4);
    
return 0;
}