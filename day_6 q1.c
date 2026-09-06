//write a program to input an in integerand check wheatherit is even or odd using if else statement
#include<stdio.h>
int main()
{
    int n;
    printf("enter n ");
    scanf("%d", &n);
    if(n%2==0)
        printf("the number is even");
    else
        printf("the number is odd");
    return 0;
}
