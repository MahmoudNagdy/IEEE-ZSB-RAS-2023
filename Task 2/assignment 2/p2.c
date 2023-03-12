#include <stdio.h>

void main(){
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;

    for(int i = 0; i < 5; i++){
        printf("%d\n", *p);
        p++;
    }
}