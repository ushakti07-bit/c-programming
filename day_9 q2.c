//write a program that accepts a percentage (o-100) and assign a grade based on thee following criteria:
//90-100: grade A 
//80-89: grade B
//70-79: grade C
//60-69: grade D
// BELOW 60: grade F
#include<stdio.h>>
int main(){
float n;
printf("enter percentage");
scanf("%f",&n);
if (n>=90){
    printf("grade A");
}
else if (n>=80 && n<=89)
{
    printf("grade B");
}
else if (n>=70 && n<=79){
    printf ("grade c");
}
else if (n>=60 && n<=69){
    printf("grade D");
}
else{
    printf("grade F");

}
return 0;
}
