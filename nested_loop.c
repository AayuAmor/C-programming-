#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=2;j++){
            printf("Outer Loop =%d \n Inner Loop =%d\n",i,j);
        }
    }
}