#include<stdio.h>
int main()
{
    int marks[]={65,45,78,75,55};
    // int i, count=0; 
    // for(i=0; i<5; i++)
    // {
    //     if(marks[i]>=60)
    //     {
    //         count++;
    //     }
    // }
    // printf("Numberof marks greater than 60 : %d\n", count);
    int i, max=marks[0];

    for(i=0; i<5; i++)
    {
        if(marks[i]>=max)
        {
            max=marks[i];
        }
    }
    printf("The highest mark is %d\n", max);
}