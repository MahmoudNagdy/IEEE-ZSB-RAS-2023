#include <stdio.h>

void main(){
    char s[100] = "Mahmoud";
    for(int i = 0; i < 100; i++){
        if(s[i] != '\0'){
            printf("%c ", s[i]);
        }
    }
}