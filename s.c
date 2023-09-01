#include<stdio.h>
#define SIZE 100
int top=-1;
int stack[SIZE];
/*int isfull()
{
    if(top==SIZE-1)
    return 1;
    else
    return 0;
}
int isempty(){
    if(top==-1)
    return 1;
    else
    return 0;
}
*/
void push(int data)
{
    stack[++top]=data;
}
int pop(){
    return stack[top--];
}
void main(){
    int number,remainder,answer;
  
    printf("Enter a number to convert into its BINARY : ");
    scanf("%d",&number);
    while(number!=0)
    {
	push(number%2);
	number=number/2;
    }
    
    while(top!=-1)
    {
        printf("%d",pop());
    }
}