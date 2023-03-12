#include <stdio.h>

int var = 5;

void print( );

int add(){
    static int num = 0; // static makes the number shared, its initial value was 0 and when calling add() it will be 1 and when calling add() again it will be 2.....
    num++;
    printf("Num: %d\n", num);
}

void main(){
    auto int x;
    register int y = 1;

    printf("Address Of x = %d\n", &x); // X Will Be Stored In The Memory.
    //printf("Address Of y = %d", &y); // Error As y Will Be Stored In CPU Regiter And Can't Print The Address Of y.
    printf("Var = %d\n", var);
    print( );
    add();
    add();
    add();
}