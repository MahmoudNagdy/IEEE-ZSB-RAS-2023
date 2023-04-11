#include <stdio.h>
#include <stdlib.h>

void main(){
    int *ptr1 = (int *) malloc(sizeof(int));
    int *ptr2 = (int *) calloc(2, sizeof(int));
    ptr1 = (int *) realloc(ptr1, 10 * sizeof(int));

    printf("Enter The Element Of the Malloc Blocks:\n");
    for (int i = 0; i < 1; i++){
        scanf("%d", &ptr1[i]);
    }

    printf("Enter The Elements Of the 2 Calloc Blocks:\n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &ptr2[i]);
    }

    printf("The Elemnts Are: \n");
    for(int i = 0; i < 1; i++){
        printf("%d\n", ptr1[i]);
    }

    for(int i = 0; i < 2; i++){
        printf("%d\n", ptr2[i]);
    }

    free(ptr1);
    free(ptr2);
    
}