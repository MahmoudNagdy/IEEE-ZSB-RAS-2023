#include <stdio.h>
#define size 15

struct student_info
{
    unsigned int roll_number : 4; // it will take numbers from 0 to 15.
    unsigned int age : 8;   // it will take numbers from 0 to 255.
    unsigned int marks : 3; // it will take numbers from 0 to 7.
// i used unsigned int to prevent the processor from converting decimal numbers to binary as integer numbers is stored as binary number in memory.

    char* name;
    char* address;
// bit-field doesn't apply to pointers or arrays so that it doesn't apply to string as the string is an array of characters.
//processor converts int numbers to binary number and focus on The MSB (Most Significant Bit), if MSB = 1 it gets 2's compliment, if MSB = 0 it display the number in decimal system.
//The Size of bit field most be less than or equal to the size of main data type. 

}student[size];


void print_struct(struct student_info student[size]){
    printf("Students Info:\n");

    for(int i = 0; i < size; i++){
        printf("The Roll Number = %d\n", student[i].roll_number);
        printf("The Name Is: %s\n", student[i].name);
        printf("The Address Is:  %s\n", student[i].address);
        printf("The Age Is: %d\n", student[i].age);
        printf("The Marks = %d\n", student[i].marks);
        printf("--------------------------------------------------------\n");
    }
}


void main(){

    printf("The Total Size Of Struct Is: %d\n", sizeof(struct student_info));
//the size of struct will be 24 insted of 32 in normal case.

    printf("-----------------------------------------------------\n");
    student[0].roll_number = 1;
    student[0].name = "Ahmed";
    student[0].age = 18;
    student[0].address = "Sharqia";
    student[0].marks = 3;

    student[1].roll_number = 5;
    student[1].name = "Mohamed";
    student[1].age = 16;
    student[1].address = "Sharqia";
    student[1].marks = 5;

    student[2].roll_number = 2;
    student[2].name = "Hesham";
    student[2].age = 17;
    student[2].address = "Sharqia";
    student[2].marks = 7;

    student[3].roll_number = 6;
    student[3].name = "Abdelrahman";
    student[3].age = 20;
    student[3].address = "Sharqia";
    student[3].marks = 7;

    student[4].roll_number = 3;
    student[4].name = "Abdallah";
    student[4].age = 19;
    student[4].address = "Sharqia";
    student[4].marks = 6;

    student[5].roll_number = 7;
    student[5].name = "Hossam";
    student[5].age = 21;
    student[5].address = "Sharqia";
    student[5].marks = 5;

    student[6].roll_number = 4;
    student[6].name = "Amr";
    student[6].age = 15;
    student[6].address = "Sharqia";
    student[6].marks = 1;

    student[7].roll_number = 8;
    student[7].name = "Mohamed";
    student[7].age = 16;
    student[7].address = "Sharqia";
    student[7].marks = 6;

    student[8].roll_number = 5;
    student[8].name = "Eman";
    student[8].age = 20;
    student[8].address = "Sharqia";
    student[8].marks = 5;

    student[9].roll_number = 9;
    student[9].name = "Mahmoud";
    student[9].age = 20;
    student[9].address = "Sharqia";
    student[9].marks = 7;

    student[10].roll_number = 6;
    student[10].name = "Mina";
    student[10].age = 22;
    student[10].address = "Sharqia";
    student[10].marks = 1;

    student[11].roll_number = 10;
    student[11].name = "Hamdy";
    student[11].age = 18;
    student[11].address = "Sharqia";
    student[11].marks = 0;

    student[12].roll_number = 7;
    student[12].name = "Omar";
    student[12].age = 21;
    student[12].address = "Sharqia";
    student[12].marks = 3;

    student[13].roll_number = 11;
    student[13].name = "Samy";
    student[13].age = 14;
    student[13].address = "Sharqia";
    student[13].marks = 4;

    student[14].roll_number = 15;
    student[14].name = "Haidi";
    student[14].age = 18;
    student[14].address = "Sharqia";
    student[14].marks = 1;

    print_struct(student);

}