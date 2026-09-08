//write a program to check if a palindrome .
#include<stdio.h>
int mainI(){
    int num, originalnum, reversednum =0, remainder;
    printf("enter an integer:");
    scanf("%d",&num);
    originalnum =num;
    while(num>0){
        remainder=num%10;
        reversednum = (reversednum *10) +remainder;
        num =num/10;
    }
    if(originalnum ==reversednum){
        printf("%d is a palindrome .\n", originalnum);
    }else{
        printf("%d is not a palindrome.\n",originalnum);
    }
    return 0;
}