#include <stdio.h>

struct info
{
    char* name;
    int age;
}i, *p = &i;


void main(){
    i.name = "Ahmed";
    i.age = 20;

    printf("Name: %s\n", p->name);
    printf("Age: %d", p->age);
}