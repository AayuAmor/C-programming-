#include<stdio.h>

int main()
{
    int age;
    float weight;
    printf("Enter age:");

    //getting input
    scanf("%d",&age);
    printf("Enter Weight:");
    scanf("%f",&weight);

    printf("Your age = %d \nYour weight = %f \n",age,weight);

    return 0;
}