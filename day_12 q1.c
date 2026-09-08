//write a program to calculate library fine based on late days as follows:
//first 5 days late: rs2/day
//next 5 days late: rs4/day
//next 20 days late: rs6/day
//more than 30 days: membership cancelled.
#include<stdio.h>
int main(){
    int days;
    int fine=0;

    printf("enter number of days late:");
    scanf("%d",&days);
    if(days<0){
        printf("no fine.book returned on time.\n");
    }
    else if(days>30){
        printf("membership cancelled.\n");
    }
    else{
        if(days<=5)
        fine=days*2;
    }
    else if(days<=10){
        fine=10+(days-5)*4;
    }
    else{
        fine=30+(days-10)*6;
    }
    printf("total fine:%d\n",fine);

    return 0;
}

