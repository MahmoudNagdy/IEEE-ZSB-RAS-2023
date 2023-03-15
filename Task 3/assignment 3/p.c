#include <stdio.h>

struct test
{
    int id;
    char* name;
    char class_id;
};

struct test1
{
    char* name;
    int id;
    char class_id;
};


void main(){
    
//There Is Deference, When int in first the size was 24 and when string in first the size was 16, This is because There is padding bytes will be add to improve performance of CPU.
//As The Size Of The Struct Changes when Sorting Of Elements Change.
/*
I will suppose that we have 64-bit processor, This processor does 8 byte in 1 cycle so that when int is first we will need 3 cycles and than means that we need 3 * 8 = 24 byte,
but when string is first we will need 2 cycles and that means 2 * 8 = 16 byte.
*/

    printf("The Size Of The Struct Before Change The Order: %d\n", sizeof(struct test));
    printf("The Size Of The Struct After Change The Order: %d", sizeof(struct test1));
}