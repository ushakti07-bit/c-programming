//write a program to reverse a given number
#include<stdio.h>
int main(){
    int num, reversed_sum = 0, remainder;
    printf("enter an integer");
    scanf("%d",&num);
    while (num !=0){
        remainder = num% 10;
        reversed_sum*10+remainder;
        num=num/10;
    }
    printf("reversed number: %d\n", reversed_sum);
    return 0;
}