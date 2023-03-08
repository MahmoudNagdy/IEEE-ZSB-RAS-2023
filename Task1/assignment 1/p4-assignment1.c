#include <stdio.h>

int add(int *firstNum, int *secondNum){
    int sum = 0;
    sum = *firstNum + *secondNum;
    return sum;
}

void main(){
    int first;
    int second;
    int sum = 0;
    printf("Enter First Num: ");
    scanf("%d", &first);
    printf("Enter Second Num: ");
    scanf("%d", &second);

    sum = add(&first, &second);

    printf("The Sum = %d", sum);
}