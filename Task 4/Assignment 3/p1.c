#include <stdio.h>
#define size 5
#define function Descending_order()

void Ascending_order(){
    int temp;
    int arr[size];

    printf("Enter Items Of Array:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The Ascending Order Is:\n");
    for(int i = 0; i < size; i++){
        printf("%d\n", arr[i]);
    }
}

void Descending_order(){
    int temp;
    int arr[size];

    printf("Enter Items Of Array:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[j] > arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The Descending Order Is:\n");
    for(int i = 0; i < size; i++){
        printf("%d\n", arr[i]);
    }
}


void main(){
    #ifdef function
        function;
    #else
        printf("Please Determine The Order");
    #endif
}