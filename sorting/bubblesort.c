#include <stdio.h>
#include <stdlib.h>

//Program to sort an array of n elements using bubble sort algo.
//In bubble sorting, Heavy/bigger elements are moved towards the end of the array & light/smaller elements
//bubbles up towards the left i.e the starting. Ultimately making the array sorted in ascending order.




void display(int* A,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",A[i]);
    }
    
}

void bubblesort(int *A,int n)
{
    int IsSorted=0;
    for (int i = 0; i < n-1; i++)
    {
        IsSorted=1;
        printf("Pass:%d\t",i+1);
        for (int j = 0; j < n-1-i; j++)
        {
            if (A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                IsSorted=0;
            }
            
        }
        if(IsSorted)
        {
            return;
        }
        
    }
    
}

int main()
{
    int A[]={5,50,2,1,4,8};//Worst case Array
    // int A[]={5,10,15,20,30,25};//Best case array
    int n=6;//SizeOf Array
    printf("Input:\t");
    display(A,n); // Displaying before bubblesorting.
    printf("\n");
    bubblesort(A,n);
    printf("\n");
    printf("Output:\t");
    display(A,n);

    return 0;
}