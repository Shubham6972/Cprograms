// return a modulus of a number.

#include<stdio.h>
int main(){
    int num ;
    printf("Enter a Number:\n");
    scanf("%d" , &num);

    if(num<0){
        printf("absValue is: %d" , -num);
    }
    
    return 0;
}
