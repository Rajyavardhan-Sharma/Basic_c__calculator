#include<stdio.h>
int main(){
    float a,b;
    char operator;

    printf("Enter first number :");
    scanf("%f",&a);
    printf("Enter an operator (+,-,*,/) :");
    scanf(" %c",&operator);
    printf("Enter second number :");
    scanf("%f",&b);

    if (operator =='+'){
        printf("Result = %.2f",a+b);
    }
    else if(operator == '-'){
        printf("Result = %.2f",a-b);
    }
    else if(operator =='*'){
        printf("Result = %.2f",a*b);
    }
    else if(operator =='/'){
        if(b!=0){
        printf("Result =%.2f",a/b);}
        else{
            printf("dividion by 0 not defoned");
        }
    }
    else{
        printf("Invalid operator");
    }


    return 0;
}
