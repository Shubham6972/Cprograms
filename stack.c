#include<stdio.h>
#define SIZE 50
int stack[SIZE];
int top=-1;

void push(int);
int pop();
void display();

void push(int data){
    if(top==SIZE-1){
        printf("Stack is full\n");
    }
    else{
        stack[++top]=data;
    }

}

int pop(){
    if(top==-1){
        printf("Stack underflow\n");
    }
    else{
        return stack[top--];
    }
}

void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("%d \n",stack[i]);
    }
}

void main(){
    int ch,data;
    
    do{
        printf("Enter choice:\n 1:push 2:pop 3:display\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("Enter data:\n");
                    scanf("%d",&data);
                    push(data);
                    break;

            case 2: printf("Removed elemnt: %d\n",pop());
            break;
            
            case 3: display();
        }
        
    }
    while(ch<4);

}

