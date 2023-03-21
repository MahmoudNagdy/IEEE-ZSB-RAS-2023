#include <stdio.h>

typedef struct complex
{
    float real;
    float img;
} complex;

complex add(complex num1, complex num2){
    complex result;
    result.real = num1.real + num2.real;
    result.img = num1.img + num2.img;
    return result;
}

void main(){
    complex num1, num2, result;
    printf("For The First Complex Number:\n");
    printf("Enter Real And Img Part:\n");
    scanf("%f %f", &num1.real, &num1.img);


    printf("For The Second Complex Number:\n");
    printf("Enter Real And Img Part:\n");
    scanf("%f %f", &num2.real, &num2.img);
    result = add(num1, num2);

    printf("The Result = %.1f + %.1fi", result.real, result.img);
}