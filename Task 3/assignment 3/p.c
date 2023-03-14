#include <stdio.h>

struct test
{
    int id;
    char* name;
    char class_id;
};


void main(){
    
//There Is Deference, When int in first the size was 24 and when string in first the size was 16, This is because There is padding bytes will be add to improve performance of CPU.
//As The Size Of The Struct Changes when Sorting Of Elements Change.

}