#include<stdio.h>
int main()
{
    int i;
    for (i=1; i<=100; i++)
    {
    if (i == 25 || i == 50 || i ==75)
    continue;
    printf("%d\n", i);
   }
}