#include<stdio.h>
int main(){
    int farenhite, celsius;
    printf("Enter the temperature in farenhite: ");
    scanf("%d", &farenhite);
    celsius = (farenhite - 32) * 5/9;
    printf("The temperature in celsius is: %d\n", celsius);
    return 0;
}