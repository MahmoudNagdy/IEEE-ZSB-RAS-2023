#include <stdio.h>

int freq(int arr[]){

    int count = 0;
    int freqArray[10];

    for(int i = 0; i < 10; i++){
        count++;
        if(arr[i] != -1){
            for (int j = i + 1; j < 10; j++){
                if(arr[i] == arr[j]){
                    count++;
                    arr[j] = -1;
                }
        }
    }

    freqArray[i] = count;
    count = 0;
                
    }

    for(int i = 0; i < 5; i++){
        if(arr[i] != -1){
            printf("no of %d is %d\n", arr[i],freqArray[i]);
        }
    }

}

void main(){
    int arr[] = {1, 2, 3, 4, 4, 3, 2, 1, 1, 4};
    freq(arr);
}