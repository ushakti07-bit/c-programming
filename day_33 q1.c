//search in a sorted array using binary search.
#include<stdio.h>
int main(void)
{
    int numbers[100];
    int size;
    int target;
    int start=0;
    int end;
    int middle;
    int found =0;
    printf("enter the number of elements:");
    scanf("%d",&size);
    printf("enter %d sorted elements:",size);
    for(int index =0; index<size; index++){
        scanf("%d",&numbers[index]);

    }
    printf("enter the element to search for:",size);
    scanf("%d",&target);
    end=size -1;
    while(start<=end){
        middle=(start+end)/2;
        if(numbers[middle]==target){
            found=1;
            printf("element found at index %d.\n",middle)
            break;
        }
        if(number[middle]<target){
            start=middle+1;
        }else{
            end=middle-1;
        }}
        if (!found){
            printf("element not found.\n");
        }
        return 0;
        }
        