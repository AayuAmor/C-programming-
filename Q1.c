#include <stdio.h>

int main() {
    int i, num1, num2, num3;

    printf("Enter first number:\n");
    scanf("%d", &num1);
    printf("Enter second number:\n");
    scanf("%d", &num2);
    printf("Enter third number:\n");
    scanf("%d", &num3);

    int num[] = {num1, num2, num3};  
    int max = num[0];

    for (i = 1; i < 3; i++) { 
        if (num[i] > max) {  
            max = num[i];
        }
    }

    printf("The largest number is %d\n", max);
    return 0;
}
