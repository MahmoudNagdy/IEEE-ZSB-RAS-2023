#include <stdio.h>

#define type int
#define Own_sizeOf(type) (char *)(&type + 1) - (char *)(&type)              // (char *)(&type + 1) - (char *)(&type) => to know how many char variables we can declare between them(how many bytes between them).
                                                                            //(&type + 1) - (&type) => to know how many varibales of same type we can declare between the element we entered and next element.

static inline int my_sizeOf(type *ptr){  //static for linker error
    return (char *)(ptr + 1) - (char *)(ptr);
}

void main(){
    type x;
    double y;
    printf("The size by using function like macros: %d\n", my_sizeOf(&x));
    printf("The size by using inline function: %d", Own_sizeOf(y));
}


/*

=> Inline Function

1- it's a normal function.
2- it's arguments evaluated once so it's size is small.
3- it's executed in compiler.
4- it's a regular function

regular function => it's a function that has single value throughout a region.


=> Macros

1- it take alot of memory as it is stored in memory after each calling.
2- it's executed in preprocessor.
3- Definition of macro ends with the new line

=> The Best Of Them Is [Inline Function].

*/