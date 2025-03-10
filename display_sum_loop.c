#include<stdio.h>
int main(){
    int num, i, sum=0;
    printf("\n enter a number:");
    scanf("%d", &num);
    for(i=1; i<=num; i++){
        sum = sum + i;
    }
    printf("\nsum is %d",sum);
}