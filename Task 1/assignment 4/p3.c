#include <stdio.h>

void main()
{
    char x[100] = "ahmed";
    char y[100] = "ahmed";
    int isEqual = 1;

    for (int i = 0; i < 100; i++)
    {

        if (x[i] != y[i]){
            isEqual = 0;
            break;
        }
        
    }
    
    if(isEqual == 0){
        printf("x != y");
    }

    else{
        printf("x = y");
    }

}
