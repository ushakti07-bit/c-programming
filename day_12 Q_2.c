//write a program to calculate electricity bill based on units consumed with these rate:
//first 100 units at ₹5/unit next 100 units at ₹7/unit
//next 100 units at ₹10/unit
//above at ₹12/unit
#include<stdio.h>
int main(){
    int units,bill =0;
    printf("enter units consumed:");
    scanf("%d",&units);
    if (units>0){
        if (units<=100){
            bill +=100*5;
        }
    }
    if (units > 100){
        if( units <=200){
            bill +=(units -100)*7;
        }else{
            bill +=100*7;
        }
    }
            if (units>200){
                if(units<=300){
                    bill += (units -200)*10;
                }else{
                    bill += 100*10;
                }
            }
            if (units>300){
                bill += (units -300){
                    bill +=(units -300)*12;
                }
                printf("total bill:%d\n",bill);
                return 0;
            }
                }
        