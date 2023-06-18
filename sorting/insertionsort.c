#include <stdio.h>
#include <stdlib.h>

void display(int* A,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",A[i]);
    }
    
}

void InsertionSort(int *A,int n)
{
    int key, j;
    for (int i = 0; i <= n-1; i++)//Looping pass
    {
        key=A[i];
        j= i-1;
        //looping each pass
        while(j>=0 && A[j]> key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1]=key;
    }
    
}
int main()
{
    int A[]={51,23,41,6,0,2};
    int n=6;
    printf("\n\n\nPerforming sorting with Insertion Sort algorithm\nInput:\t");
    display(A,n); // Displaying before insertion sort
    printf("\n");
    InsertionSort(A,n);
    printf("\nOutput:\t");
    display(A,n);

    return 0;
}