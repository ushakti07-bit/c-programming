//read and print elements of a one dimensional array
#include<stdio.h>
int main(void){
    int elements[100];
    int count;
    int index;
    printf("enter the number of elements (1-100):");
    scanf("%d", &count);
    if (count<1|| count>100){
        printf("invalid number of elements.\n");
        return 1;
    }
    printf("enter %d elements:",count);
    for (index =0; index < count; index++){
        scanf("%d",&elements[index]);
    }
    printf("array elements:");
    for (index=0;index<count;index++){
        printf("%d",elements[index]);
    }
    printf("\n");
    return 0;
    }