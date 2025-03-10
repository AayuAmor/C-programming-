#include<stdio.h>
#include<string.h>
 int main(){
    int num1, num2, beta;
    printf("Enter First Number:");
    scanf("%d", &num1);
    printf("Enter Second Number:");
    scanf("%d", &num2);
    beta = num1;
    num1 = num2;
    num2 = beta;
    printf("First Number is %d\n Second Number is: %d\n", num1, num2);
    return 0;


 }
