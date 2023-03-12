#include <stdio.h>
#define size 7


void main(){
    int arr[] = {0, 1, 0, 2, 1, 3, 2};
    int count = 0;

    for(int i = 0; i < size; i++){
        for(int j = i +  1; j < size; j++){
            if(arr[j] == arr[i]){
                count++;
                break;
            }
        }
    }

    printf("%d", count);
}