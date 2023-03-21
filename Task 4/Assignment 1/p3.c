#include <stdio.h>

void main(){
    typedef int INTEGER;
    typedef short SmallestInteger;
    typedef long BiggestInteger;
    typedef char C;
    typedef float numWithFraction;
    typedef double bigNumWithFraction;


    printf("The Size Of INTEGER Is: %d\n", sizeof(INTEGER));
    printf("The Size Of SmallestInteger Is: %d\n", sizeof(SmallestInteger));
    printf("The Size Of BiggestInteger Is: %d\n", sizeof(BiggestInteger));
    printf("The Size Of C Is: %d\n", sizeof(C));
    printf("The Size Of numWithFraction Is: %d\n", sizeof(numWithFraction));
    printf("The Size Of bigNumWithFraction Is: %d\n", sizeof(bigNumWithFraction));
}