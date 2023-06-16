#include <stdio.h>


struct node {// struct type 'node' is a self-referential structure
    int data1;
    char data2;
    struct node* link; // link is a pointer to a structure of type 'node'. A.K.A refencing pointer to 'node'
};
//NOTE: An important point to consider is that the pointer should be initialized properly
// before accessing, as by default it contains garbage value.


int main()
{
    struct node ob;
    return 0;
}