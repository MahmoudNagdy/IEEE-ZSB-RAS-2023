#include <stdio.h>

enum operators{
    add = 43,
    sub = 45,
    multiply = 42,
    div = 47
};

void main(){
    printf("%d", sizeof(enum operators));
//the size of enum is the same size of int, it is 4 byte.
//men who write the compiler control its size;
// when i adds new elements to enum, its size is const.
}