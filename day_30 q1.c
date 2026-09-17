//search for an element in an array using linear search.
#include<stdio.h>
int main(void){
    int numbers[100];
    int size;
    int target;
    int found_index =-1;
    printf("enter the number of elements:");
    scanf("%d",&size);
    printf("enter %d elements:",size);
    for (int index=0; index <size;index++){
        scanf("%d",&numbers[index]);
    }
    printf("enter the element to search for:");
    scanf("%d",&target);
    for (int index =0; index<size;index++){
        if (numbers[index]==target){
            found_index =index;
            break;
        }}
        if (found_index ==-1){
            printf("element not found.\n");
        }else{
            printf("element found at index %d.\n", found_index);

        }
        return 0;
        }