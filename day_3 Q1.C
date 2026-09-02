//Write a program to convert temperature from celsius to fahrenheit
#include<stdio.h>
int main(){
    float celsius;
    printf("enter temperature in celsius");
    scanf("%f",&celsius);
    printf("temperature in fraherenheit is %f\n",(celsius*9/5)+32);
    return 0;
}