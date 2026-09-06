//Write a program to input time in a second and covert it into hour:minutes:seconds format
#include<stdio.h>
int main(){
    float seconds;
    int hours, minutes , remainingseconds;
    printf("enter time in a second :");
    scanf("%f",&seconds);
    hours = (int)seconds/3600;
    minutes =((int)seconds % 3600)/60;
    remainingsecond =(int)seconds % 60;
    printf("time is%d:%d:%d", hours,minutes,remainingsecond);
    return 0;
}
