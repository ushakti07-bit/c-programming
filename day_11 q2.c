//write a program to find profit or loss percentage given cost price and selling price
#include<stdio.h>
int main(){
    float cp,sp,profit,loss;
    printf("enter cost price\n");
    scanf("%f",&cp);
    printf("enter selling price\n");
    scanf("%f",&sp);
    if(sp>cp){
        profit=sp-cp;
        printf("profit percentage is %f",profit/cp*100);
    }
    else if(cp>sp){
        loss=cp-sp;
        printf("loss percentage is %f",loss/cp*100);
    }
    else{
        printf("no profit no loss");
    }
    return 0;
}