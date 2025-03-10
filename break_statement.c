#include<stdio.h>
int main(){
    int target = 7;
    for (int i = 1; i <=10; i++){
        printf("Current Value: %i\n", i);

        if(i == target){
            printf("Target value reached. Exiting Loop.\n");
            break; //Exit the loop
        }
    }
}