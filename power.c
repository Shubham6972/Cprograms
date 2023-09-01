#include<stdio.h>
#include<math.h>
int power();

int power(int a,int b){
    return pow(a,b);
}

int main(){
    int x,n,y;
    printf("Enter x and n : ");
    scanf("%d%d",&x,&n);
    y=power(x,n);
    printf("Y = %d", y);
    return 0;

}