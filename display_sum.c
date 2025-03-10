#include<stdio.h>
int main()
{
    int a, i;
    printf("Enter a Number:");
    scanf("%d", &a);
    printf("The further number is %d", i);
    for(i=1; i<=100;i++){
       printf("%d\n",a+ i);
    }
    
    return 0;
}