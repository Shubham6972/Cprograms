#include<stdio.h>
#include<string.h>
#define SIZE 50
int stack[SIZE];
int top=-1;

void push(char);
int pop();

void push(char data){
    stack[++top]=data;
}

int pop(){
    return stack[top--];
}    


void reverse(char string[]){
    int i;
    for(i=0;i<=strlen(string);i++){
        push(string[i]);
    }

    for(i=0;i<=strlen(string);i++){
        printf("%c" , pop());
    }
}

void main(){
    char string[SIZE];
    printf("Enter a string:\n");
    scanf("%s" , &string);

    reverse(string);
}    
