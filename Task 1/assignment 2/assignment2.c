#include <stdio.h>

void main(){
    int x = 1, y = 2, z = 3;
    int *p, *q, *r;

    p = &x;
    q = &y;
    r = &z;
    printf("The Value Of X = %d\n", x);
    printf("The Value Of Y = %d\n", y);
    printf("The Value Of Z = %d\n", z);
    printf("The Value Of p = %d\n", p);
    printf("The Value Of q = %d\n", q);
    printf("The Value Of r = %d\n", r);
    printf("The Value Of p* = %d\n", *p);
    printf("The Value Of q* = %d\n", *q);
    printf("The Value Of r* = %d\n", *r);


    printf("Swapping Pointers\n");

    r = p;
    p = q;
    q = r;


    printf("The Value Of X = %d\n", x);
    printf("The Value Of Y = %d\n", y);
    printf("The Value Of Z = %d\n", z);
    printf("The Value Of p = %d\n", p);
    printf("The Value Of q = %d\n", q);
    printf("The Value Of r = %d\n", r);
    printf("The Value Of p* = %d\n", *p);
    printf("The Value Of q* = %d\n", *q);
    printf("The Value Of r* = %d\n", *r);

}