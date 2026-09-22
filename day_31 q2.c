//Reverse an array without taking extra space.
#include<stdio.h>
int main(void){
    int n;
    int element;
    int positive_count =0;
    int negative_count =0;
    int zero_count =0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("array must contain at least one element.\n");
        return 1;
    }
    printf("enter %d elements:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&element);
        if (element>0)
        {
            positive_count++;
        }
        else if (element<0)
        {
            negative_count++;
        }
        else
        {
            zero_count++;
        }
        }
        printf("positive numbers:%d\n",positive_count);
        printf("negative numbers:%d\n",negative_count);
        printf("zeros:%d\n", zero_count);
        return 0;

    }