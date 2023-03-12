#include <stdio.h>

extern int var; // extern Uses To shared data between files


void print(){
    printf("Var = %d\n", var);
    var = 10;
}