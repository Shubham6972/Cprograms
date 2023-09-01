//Sum of natural numbers using recursion..

#include<stdio.h>
int sum();

int sum(int n){
    if(n>1){
        return n+sum(n-1);
    }
    else{
        return 1;
    }
}

int main(){
    int num;
    scanf("%d",&num);
    printf("Sum = %d",sum(num));
    return 0;
}
