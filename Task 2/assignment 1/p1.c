#include <stdio.h>

void main(){
    int *p1;
    char *p2;
    long long *p3;

    printf("P1 Old = %d\n", p1);
    p1++;
    printf("P1 New = %d\n", p1);

    printf("P2 Old = %d\n", p2);
    p2++;
    printf("P2 New = %d\n", p2);

    printf("P3 Old = %d\n", p3);
    p3++;
    printf("P3 New = %d\n", p3);

    printf("P1 Before The Increment Was 16, After Increment It Became 20 As Int = 4 So That It Will Find The Old Address Of p1 And Increase It 4, Char = 1 Byte So That It Will Find The Old Address Of p2 And Increase It 1 (If It Was 8, It Will Become 9), Long Long = 8 Byte So That if It Was 19 It Will Be 27.");
}