#include <stdio.h>

int add(int x){
    x++;
    return x;
}

void main(){
    int (*p)(int);
    p = &add;
    int num;
    printf("Enter A Number: ");
    scanf("%d", &num);

    int z = p(num);

    printf("The Number After Increment = %d", z);
}