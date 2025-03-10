#include<stdio.h>
#include<string.h>
int main(){
    char key[50];
    char right_key[] = "fuck";
    do{
    printf("Please Enter the Key:");
    scanf("%49s", key);
    if(strcmp(key, right_key) != 0){
        printf("You Entered Fucking Wrong key !!!\n");
    }
    }
    while(strcmp(key, right_key) != 0);
    printf("Oooohhhh Yessss Baby... I can Feel it inside Me\n");
    return 0;

}