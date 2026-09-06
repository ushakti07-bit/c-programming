//write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character
#include<stdio.h>
int main(){
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("character is an upper case alphabet");
    }
    else if(ch>='a' && ch<='z'){
        printf("character is lower case alphabet");
    }
    else if (ch>='0' && ch<='9'){
        printf("character is an digit");
    }
    else{
        printf("character is a special character");
    }
    return 0;
}
