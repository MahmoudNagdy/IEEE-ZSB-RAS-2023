#include <stdio.h>

struct Date{
    char* day;
    char* month;
    char* year;
}date1, date2;


void main(){
    printf("Enter The First Date:\n");
    scanf("%s %s %s", &date1.day, &date1.month, &date1.year);

    printf("Enter The Second Date:\n");
    scanf("%s %s %s", &date2.day, &date2.month, &date2.year);

    if(date1.day == date2.day && date1.month == date2.month && date1.year == date2.year){
        printf("Dates are equal");
    }

    else{
        printf("Dates aren't equal");
    }
}