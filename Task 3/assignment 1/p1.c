#include <stdio.h>


#define n 15

struct student_info{
    int roll_number;
    char* name;
    int age;
    char* address;
    double marks;
};


void main(){
    struct student_info student[n];

    student[0].roll_number = 1;
    student[0].name = "Ahmed";
    student[0].age = 18;
    student[0].address = "Sharqia";
    student[0].marks = 78.5;

    student[1].roll_number = 5;
    student[1].name = "Mohamed";
    student[1].age = 16;
    student[1].address = "Sharqia";
    student[1].marks = 79.5;

    student[2].roll_number = 2;
    student[2].name = "Hesham";
    student[2].age = 17;
    student[2].address = "Sharqia";
    student[2].marks = 80.5;

    student[3].roll_number = 6;
    student[3].name = "Abdelrahman";
    student[3].age = 20;
    student[3].address = "Sharqia";
    student[3].marks = 88.5;

    student[4].roll_number = 3;
    student[4].name = "Abdallah";
    student[4].age = 19;
    student[4].address = "Sharqia";
    student[4].marks = 70.5;

    student[5].roll_number = 7;
    student[5].name = "Hossam";
    student[5].age = 21;
    student[5].address = "Sharqia";
    student[5].marks = 90.5;

    student[6].roll_number = 4;
    student[6].name = "Amr";
    student[6].age = 15;
    student[6].address = "Sharqia";
    student[6].marks = 91.5;

    student[7].roll_number = 8;
    student[7].name = "Mohamed";
    student[7].age = 16;
    student[7].address = "Sharqia";
    student[7].marks = 60.5;

    student[8].roll_number = 5;
    student[8].name = "Eman";
    student[8].age = 20;
    student[8].address = "Sharqia";
    student[8].marks = 99.5;

    student[9].roll_number = 9;
    student[9].name = "Mahmoud";
    student[9].age = 20;
    student[9].address = "Sharqia";
    student[9].marks = 50.5;

    student[10].roll_number = 6;
    student[10].name = "Mina";
    student[10].age = 22;
    student[10].address = "Sharqia";
    student[10].marks = 56.87;

    student[11].roll_number = 10;
    student[11].name = "Hamdy";
    student[11].age = 18;
    student[11].address = "Sharqia";
    student[11].marks = 49.69;

    student[12].roll_number = 7;
    student[12].name = "Omar";
    student[12].age = 21;
    student[12].address = "Sharqia";
    student[12].marks = 110.5;

    student[13].roll_number = 11;
    student[13].name = "Samy";
    student[13].age = 14;
    student[13].address = "Sharqia";
    student[13].marks = 10.5;

    student[14].roll_number = 20;
    student[14].name = "Haidi";
    student[14].age = 18;
    student[14].address = "Sharqia";
    student[14].marks = 88.5;

    printf("Students Info:\n");
    for(int i = 0; i < n; i++){
        printf("roll number = %d\n", student[i].roll_number);
        printf("name = %s\n", student[i].name);
        printf("age = %d\n", student[i].age);
        printf("address = %s\n", student[i].address);
        printf("total marks = %.2f\n", student[i].marks);
        printf("------------------------------------\n");
    }

}