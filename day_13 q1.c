// write a program to implement a basic calculator using switch case for +,-,*,/,%
#include<stdio.h>
int main(void){
    char operator;
    int a,b, result;

    printf("enter an operator (+,-,*,/,%):");
    scanf("%c", &operator);
    printf("enter two integer:");
    scanf("%d %d", &a,&b);
    switch (operator){
        case '+':
        result = a+b;
        printf("%d + %d =%d\n", a,b, result);
        break;

        case'*':
        result= a*b;
        printf("%d * %d =%d\n",a,b,result);
        break;

        case'/':
        if (b !=0){
            result = a/b;
            printf("%d /%d =%d\n",a,b,result);
        }else{
            printf{"error: division by zero is not allowed.\n");
            }
            break;
            
            case '%':
            if (b!=0){
                result=a%b;
                printf ("%d %% %d= %d\n",a,b,result);
            }else{
                printf("error: modulo by zero  is not allowqed.\n");
            }
            break;
            default:
            printf("error: invalid operator entered.\n");
        }
        return 0;
    }
            }
