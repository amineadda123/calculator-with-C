#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//call a function that calls calculator

void myCalculator(){
    //ask the user to take two numbers and an operator + - / % *t num1;
    float num1;
    float num2;
    char operator;
    printf("enter number:");
    scanf("%f",&num1);
    printf("enter number:");
    scanf("%f",&num2);
    printf("operator=");
    scanf(" %c",&operator);
if(operator=='+') {
    float res = num1+num2;
    printf("sum=%f",res);
   }else if(operator=='-') {
        float res = num1-num2;
        printf("difference=%f",res);

        }else if(operator=='*') {
            float res = num1*num2;
            printf("product=%f",res);
            }else if(operator=='/') {
                float res = num1/num2;
                printf("quotient=%f",res);
                }else if(operator=='^') {
                    float res = pow(num1,num2);
                    printf("power=%f",res);
                        }else if(operator=='('){
                            float res = num1*num2;
                            printf("(+)=%f",res);
                            }
}

//this is the main function where we are going to call the function calculator
int main(){
    myCalculator();
    }
