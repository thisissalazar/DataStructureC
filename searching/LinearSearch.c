#include <stdio.h>

int main()
{
//Setting SizeOf array and Values of elements    
    int array[100], search, size, val;

    printf("Enter the size of array\n");
    scanf("%d", &size);

    printf("\nEnter the value for %d number of elements", size);
    for(val=0; val<size; val++)
    {
            scanf("%d",&array[val]);
    }

//Requesting the value from the user.

    printf("Enter the value you want to search for");
    scanf("%d", &search);

    for(val=0; val<size; val++)
    {
        if(array[val]==search)
        {
            printf("Integer %d is located at address (Array[%d])", search,val+1);
            break;
        }
    }
    //if (val==size);
    //    printf("ERROR: Your requested value %d could not be located.", search);
    return 0;
}
