#include<stdio.h>
int add();
int main(){
    int  c = add();
    printf("answer is:%3d",c);
    
}

int add(){
    int a,b,c;
    printf("Enter Two numbers:\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}