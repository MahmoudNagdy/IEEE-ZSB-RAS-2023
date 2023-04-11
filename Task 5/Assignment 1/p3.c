#include <stdio.h>

void main(){
    int length, c = 0, maxCount = 0;
    printf("Enter the size of name: ");
    scanf("%d", &length);

    char maxRepeatedChar;
    char name[100];
    printf("Enter your name: ");
    scanf("%s", &name);
    for(int i = 0; i < length; i++){
        c = 0;
        for(int j = i + 1; j < length; j++){
            if(name[i] == name[j]){
                c++;
            }
        }

        if(maxCount < c){
            maxCount = c;
            maxRepeatedChar = name[i];
        }
    }
    printf("%c, %d", maxRepeatedChar, maxCount + 1);
    
}