#include <stdio.h>

void main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 3, 4, 1, 8, 9, 7, 8};

    for(int i = 0; i < 13; i++){
        int count = 0;
        for(int j = 0; j < 13; j++){
            if(arr[i] == arr[j] && i != j){
                count = 1;
            }          
        }
        if(count == 0){
            printf("%-4d", arr[i]);
        }
    }
}

