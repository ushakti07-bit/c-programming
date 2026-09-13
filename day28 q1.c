//write a program to print all the prime number from 1 to n
#include<stdio.h>
int main(void){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("prime numbers from 1 to %d are:",n);
    for (int number =2; number<=n; number++){
        int isprime =1;
        fpr (int divisor =2; divisor<number; divisor++){
            if (number%divisor==0){
                isprime=0;
                break;
            }
        }
        if (isprime){
            printf("%d",number);
        }
    }
    printf("\n");
    return 0;
        }