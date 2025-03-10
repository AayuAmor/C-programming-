#include<stdio.h>
int main()
{
    int a[]={4,2,6,1,7,0,11,2,4,8};
   
    int i, max=a[0];

    for(i=0; i<9; i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
    }
    printf("The Largest number is %d\n", max);
}