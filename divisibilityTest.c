//check whether the number is divisible by 3 and 5 simultaneously.

#include<stdio.h>
int main(){
    int num;
    printf("enter a number:\n");
    scanf("%d" , &num);

    if(num%3 == 0 && num%5 == 0){
        printf("Test Passed");
    }
    else{
        printf("Test Failed");
    }
    return 0;

}