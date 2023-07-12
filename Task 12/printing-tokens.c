#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void){
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    char *str = strtok(s, " ");

    while(str != NULL){
        printf("%s\n", str);
        str = strtok(NULL, " ");
    }
}
