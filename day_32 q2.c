//find the digit that occurs the most times in an integer number
#include<stdio.h>
int main(){
    long long n;
    int count[10] ={0}; //count digit 0 to 9
    int maxcount =0;
    int mostfrequentdigit =0;
    printf("enter an integer:");
    scanf("%lld",&n);
    if(n<0){
        n =-n;//handle negative numbers
    }
    if (n==0){
        printf("most frequent digit:0\n");
        return 0;
    }
    while(n>0){
        int digit =n%10;
        count[digit]++;
        n/=10;
    }
    for(int i=0; i<=9;i++){
        if (count[i]>maxcount){
            maxcount =count[i];
            mostfrequent digit =i;
        }
    }
    printf("most frequent digit:%d\n",mostFrequentDigit);
    return 0;
        }