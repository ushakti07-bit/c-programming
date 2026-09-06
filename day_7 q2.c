//write a program to input a character and check whether it is vowel or constant using if-else statement
#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("enter any character");
    scanf("%c",&ch);
    if (isalpha(ch)){
        if (ch == 'a' || ch == 'A'||
        ch == 'e' || ch == 'E'||
        ch == 'i' || ch == 'I'||
        ch == 'o' || ch == 'O'||
        ch == 'u' || ch == 'U') {
            printf("vowel");
        } else {
            printf("consonant");
        }
    } else {
        printf("not an alphabet");
    }
    return 0;
}