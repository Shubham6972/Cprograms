#include<stdio.h>
#define MAX 20
int stack[MAX];
int top = -1;

void push(int data)
{
    stack[++top] = data;
}

int pop()
{
    return stack[top--];
}

void print()
{
    if(top==-1){
        printf("Stack Underflow");
    }
    else{
        while(top!=-1)
        {
            printf("%d",pop());
        }
    }
    
}

void decimalToBinary(int n)
{
    while(n!=0)
    {
        push(n%2);
        n=n/2;
    }
}

void main()
{
    int decimalNum;
    printf("Enter a Decimal Number:\n");
    scanf("%d",&decimalNum);
    decimalToBinary(decimalNum);
    print();
}

