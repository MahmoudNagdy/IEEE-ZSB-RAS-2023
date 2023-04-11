#include <stdio.h>
#include <stdlib.h>

void main(){
    int *ptr1 = (int *) malloc(sizeof(int));
    int *ptr2 = (int *) calloc(2, sizeof(int));
    free(ptr1);

    long long int *ptr3 = (long long int *) malloc(sizeof(long long int));

    /*
        memory fragmentation will happen, where there is enough space in the free-store to allocate your requested memory block, 
        but not enough contiguous space for the size of the block you've requested.
    */
}