#include <stdio.h>


void main(){
    char x[100] = "IEEE-ZSB-RAS-2023";
    char y[100];

    for(int i = 0; i < 100; i++){
        y[i] = x[i];
    }

    printf("The New String Is:\n");
    for(int j = 0; j < 100; j++){
        printf("%c", y[j]);
    }
}