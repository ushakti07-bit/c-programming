//write a program to find and display the sum of the first n natural number
#include<stdio.h>
int main(){long long n,sum;
printf("enter a positive integer (n):");
if (scanf("%lld", &n) !=1 || n<1){
    printf("please enter a valid natural number(>=1).\n");
    return 1;
}
//using long long to prevent memory overflow
sum=n*(n+1)/2;
printf("the sum of the %lld natural numberis: %lld\n",n,sum);
return 0;
}