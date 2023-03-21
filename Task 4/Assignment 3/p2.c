#include <stdio.h>
#define add(num1, num2) num1 + num2
#define sub(num1, num2) num1 - num2
#define operation add
#define Op "Add"



void main(){

    int num1, num2;
    printf("Enter Num1: ");
    scanf("%d", &num1);

    printf("Enter Num2: ");
    scanf("%d", &num2);

    #ifdef operation
        printf("The Result Of %s Is: %d\n" , Op,operation(num1, num2));
    #else
        printf("Please Choose An Operation.");
    #endif


}