#include <stdio.h>
#define size 6


void main(){
    int arr[] = {1, 2, 3, 1, 4, 2};
    int c = 0;

    for(int i = 0; i < size; i++){
        for(int j = i +  1; j < size; j++){
            if(arr[j] == arr[i]){
                c++;
                break;
            }
        }
    }

    printf("%d", c);
}