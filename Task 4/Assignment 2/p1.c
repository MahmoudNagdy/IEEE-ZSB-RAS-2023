#include <stdio.h>

enum operators{
    add = 43,
    sub = 45,
    multiply = 42,
    div = 47
};

void calc(int num1, int num2, char op){
    if(op == add){
        printf("x + y = %d", num1 + num2);
    }

    else if(op == sub){
        printf("x - y = %d", num1 - num2);
    }

    else if(op == multiply){
        printf("x * y = %d", num1 * num2);
    }

    else if(op == div){
        printf("x / y = %d", num1 / num2);
    }
}

void main(){
    int num1, num2;
    char op;

    printf("Enter Num1: ");
    scanf("%d", &num1);

    printf("Enter Num2: ");
    scanf("%d", &num2);

    printf("Enter Operator: ");
    scanf("\n%c", &op);

    calc(num1, num2, op);
    
}