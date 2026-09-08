//write a program to take a number as input and print its equivalent binary representation
#include<stdio.h>
void printbinary(int n){
    if(n>1){
        printbinary(n/2);
    }
    printf("%d", n%2);
}
int main (){
    int number;
    printf("enter a number:");
    scanf("%d", &number);
    printf("binary representation:";
    if (number<0){
        printf("-");
    }
    printbinary(number);
    printf("\n");
    return 0;
}
