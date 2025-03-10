#include<stdio.h>
int main(){
    int a, b, evensum =0, oddsum=0, i;
    printf("Enter Two numbers: ");
    scanf("%d%d",&a,&b);
    do{
    
    if(a%2==0 )
        evensum= evensum + a;
        
    
    else
        oddsum=oddsum + a;
       
    
    a++;
    
    }
    while (a<=b);
    
    printf("Even sum: %d\n",evensum);
    printf("Odd sum: %d\n",oddsum);
    return 0;
}