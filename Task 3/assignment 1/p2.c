#include <stdio.h>
#define n 15

struct student_info{
    int roll_number;
    char* name;
    int age;
    char* address;
    double marks;
};

struct student_info student[n];

void student_info(int roll_number, char* name, int age, char* address, double marks){
    int count = 0;

    printf("Students Info:\n");
    for(int i = 0; i < n; i++){
        roll_number = student[i].roll_number;
        name = student[i].name;
        age = student[i].age;
        address = student[i].address;
        marks = student[i].marks;
        printf("roll number = %d\n", roll_number);
        printf("name = %s\n", name);
        printf("age = %d\n", age);
        printf("address = %s\n", address);
        printf("total marks = %.2f\n", marks);
        printf("------------------------------------\n");

        if(marks < 12){
            count++;
        }

    }

    printf("Number Of Students With Marks Less Than 12: %d", count);
}

void main(){

    student[0].roll_number = 1;
    student[0].name = "Ahmed";
    student[0].age = 18;
    student[0].address = "Sharqia";
    student[0].marks = 15;

    student[1].roll_number = 5;
    student[1].name = "Mohamed";
    student[1].age = 16;
    student[1].address = "Sharqia";
    student[1].marks = 11.5;

    student[2].roll_number = 2;
    student[2].name = "Hesham";
    student[2].age = 17;
    student[2].address = "Sharqia";
    student[2].marks = 12;

    student[3].roll_number = 6;
    student[3].name = "Abdelrahman";
    student[3].age = 20;
    student[3].address = "Sharqia";
    student[3].marks = 20;

    student[4].roll_number = 3;
    student[4].name = "Abdallah";
    student[4].age = 19;
    student[4].address = "Sharqia";
    student[4].marks = 19;

    student[5].roll_number = 7;
    student[5].name = "Hossam";
    student[5].age = 21;
    student[5].address = "Sharqia";
    student[5].marks = 10;

    student[6].roll_number = 4;
    student[6].name = "Amr";
    student[6].age = 15;
    student[6].address = "Sharqia";
    student[6].marks = 9;

    student[7].roll_number = 8;
    student[7].name = "Mohamed";
    student[7].age = 16;
    student[7].address = "Sharqia";
    student[7].marks = 16;

    student[8].roll_number = 5;
    student[8].name = "Eman";
    student[8].age = 20;
    student[8].address = "Sharqia";
    student[8].marks = 18;

    student[9].roll_number = 9;
    student[9].name = "Mahmoud";
    student[9].age = 20;
    student[9].address = "Sharqia";
    student[9].marks = 17;

    student[10].roll_number = 6;
    student[10].name = "Mina";
    student[10].age = 22;
    student[10].address = "Sharqia";
    student[10].marks = 20;

    student[11].roll_number = 10;
    student[11].name = "Hamdy";
    student[11].age = 18;
    student[11].address = "Sharqia";
    student[11].marks = 8;

    student[12].roll_number = 7;
    student[12].name = "Omar";
    student[12].age = 21;
    student[12].address = "Sharqia";
    student[12].marks = 14;

    student[13].roll_number = 11;
    student[13].name = "Samy";
    student[13].age = 14;
    student[13].address = "Sharqia";
    student[13].marks = 9.5;

    student[14].roll_number = 20;
    student[14].name = "Haidi";
    student[14].age = 18;
    student[14].address = "Sharqia";
    student[14].marks = 11;

    for(int i = 0; i < n; i++){
        student_info(student[i].roll_number, student[i].name, student[i].age, student[i].address, student[i].marks);
        break;
    }

}