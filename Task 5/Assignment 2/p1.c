#include <stdio.h>

void main(){
    int hours, minutes, seconds, time;
    printf("Enter a time in format [hh:mm:ss] => ");
    scanf("%02d:%02d:%02d",&hours,&minutes,&seconds);
    time = hours * 3600 + minutes * 60 + seconds;  //time in seconds

    hours = time / 3600;
    minutes = (time - 3600*hours) / 60;
    seconds = (time - 3600*hours)- (minutes * 60);

    printf("Entered time is  %02d:%02d:%02d\n", hours, minutes, seconds);
}