// write  a program to find the roots of a quadratic equation and categorize them 
#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,d,root1,root2;
    printf("enter a\n,b\n,c\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if (d>0){
        root1 =(-b + sqrt(d))/(2*a);
        root2 =(-b -sqrt(d))/(2*a);
        printf("roots are real and different:%g.5g\n", root1, root2);
    }else if (d==0){
        root1=(-b+sqrt(d))/(2*a);
        printf("roots are real and same :%g\n",root1);
    }else{
        printf("roots are complex\n");

    }
    return 0;
}