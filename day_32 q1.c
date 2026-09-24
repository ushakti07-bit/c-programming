//merge two arrays.
#include<stdio.h>
int main(void)
{
    int merged[200],first_size, second_size,index;
    printf("enter first array size:");
    scanf("%d",&first_size);
    for(index=0; index<first_size;index++)
    scanf("%d",&merged[index]);
    printf("enter second array size:");
    scanf("%d",&second_size);
    for(index=0; index<second_size;index++)
    scanf("%d",&merged[first_size +index]);
    printf("merged array:");
    for(index=0;index<first_size + second_size;index++)
    printf("%d",merged[index]);
    return 0;
}