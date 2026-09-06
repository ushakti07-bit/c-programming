//write a program and check whether it is positive ,negative or zero using nested if else statement
#include<stdio.h>
int main()
{
    int n;
    printf("enter n ");
    scanf("%d", &n);
    if(n>0)
        printf("the number is positive");
    else
        if(n<0)
            printf("the number is negative");
        else
            printf("the number is zero");
    return 0
}
