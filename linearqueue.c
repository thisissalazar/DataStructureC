//-------------Headers------------//
#include <stdio.h>
#include <stdlib.h>

//----------Definitions-----------//
#define MAX 50

//-----------Function Declaration----------// 
void enqueue();
void dequeue();
void display();
int queue[MAX];
int rear = - 1;
int front = - 1;


void main()
{
    int choice;
    while (1)
    {
        printf("Enter the number to execute a function.\n");
        printf("Insert element to queue (1)\n");
        printf("Delete element from queue (2) \n");
        printf("Display all elements of queue (3)\n");
        printf("Exit (4)\n------------------------------------------------\n\n");
        printf("Awaiting Input: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        } 
    } 
} 

//---------Function Initialization -----------------//
void enqueue()
{
    int element;
    if (rear == MAX - 1)
    printf("Queue is full\n");
    else
    {
        if (front == - 1)
        
        front = 0;
        printf("Enter element which is to be enqueued ");
        scanf("%d", &element);
        rear = rear + 1;
        queue[rear] = element;
    }
}
//---------------------------------------------------------------// 
void dequeue()
{
    if (front == -1 || front > rear) //using or operand here
    {
        printf("Queue is empty. Unable to perform operation.\n");
        return ;
    }
    else
    {
        printf("Element dequeued from queue is : %d\n", queue[front]);
        front = front + 1;
    }
}
//---------------------------------------------------------------// 
void display()
{
    int i;
    if (front==-1 || front > rear)
        printf("Queue is empty \n");
    else
    {
        printf("Elements of Queue are: \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
//---------------------------------------------------------------//

//