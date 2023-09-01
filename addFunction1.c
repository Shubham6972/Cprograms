#include<stdio.h>

int add();
int add(int a, int b){
    int c;
     c=a+b;

    return c;

}
int main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Sum of two numbers is:%3d",add(a,b));
}





