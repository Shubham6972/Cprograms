#include<stdio.h>
int factorial();

int factorial(int num){
    int i,fact;
    fact=1;
    for(i=2;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n,r;
    printf("Enter values of n and r:\n");
    scanf("%d%d",&n,&r);
    printf("nPr=%3d",factorial(n)/factorial(n-r));
    return 0;
}