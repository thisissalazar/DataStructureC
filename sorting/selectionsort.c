#include <stdio.h>
#include <stdlib.h>
//Selection sort is 0(n^2) i.e Worst Case sorting algo. 
void display(int* A,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",A[i]);
    }
    
}

void SelectionSort(int *A,int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int temp, IndexOfMin;
        for (int j = i+1; j < n; j++)
        {
            if(A[j]<A[IndexOfMin])
            {
                IndexOfMin=j;
            }
        }
        //swap
        temp=A[i];
        A[i]= A[IndexOfMin];
        A[IndexOfMin]=temp;

    }
    
}

int main()
{
    int A[]={51,23,41,6,0,2};
    int n=6;
    printf("\n\n\nPerforming sorting with Selection Sort algorithm\nInput:\t");
    display(A,n); // Displaying before Selection sort
    printf("\n");
    SelectionSort(A,n);
    printf("\nOutput:\t");
    display(A,n);

    return 0;
}