#include<stdio.h>
#include<string.h>
 struct Student{
    char name[50];
    int roll_number;
    float mark;
    char color[20];
 };
 int main(){
    struct Student s;
    printf("Enter Your Name:");
    scanf("%s", &s.name);
    printf("Enter Your Roll Number:");
    scanf("%d", &s.roll_number);
    printf("Enter Your Marks");
    scanf("%f", &s.mark);
    printf("Enter Your color:");
    scanf("%s", &s.color);
    printf("Your Name is %s\n Your Roll Number is: %d\n Your Mark is:%f\n", s.name, s.roll_number, s.mark);
    printf("Your color is %s", s.color);
    return 0;
 }