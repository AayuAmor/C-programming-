//to enter the name, roll number and marks of a student and print them all 
#include<stdio.h>
int main(){
    char name[50];
    int roll_number;
    float mark;
    printf("Enter Your Name:");
    scanf("%s", &name);
    printf("Enter Your Roll Number:");
    scanf("%d", &roll_number);
    printf("Enter Your Marks");
    scanf("%f", &mark);
    printf("Your Name is %s\n Your Roll Number is: %d\n Your Mark is:%f", name, roll_number, mark);
    return 0;
}