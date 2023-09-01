#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 20

int stack[MAX];
int top=-1;

void push(char x){
    stack[++top]=x;
}

char pop(){
    if(top==-1){
        return -1;
    }
    else{
        return stack[top--];
    }
}

int preced(char x){
    if(x=='('){
        return 0;
    }
    else if(x=='+' || x=='-'){
        return 1;
    }
    else if(x=='*' || x=='/'){
        return 2;
    }
    return -1;
}

void main()
{
      int l;
      char infix[MAX];
      int i=0,j=0;
      char symbol,temp;
      char postfix[40];
      l=strlen(infix);

      printf("Enter Exp:\n");
      scanf("%s",&infix);
      while(i<l)
      {
             symbol=infix[i];
             switch(symbol)
             {
                    case '(': push(symbol);
                    break;
                    case ')': temp=pop();
                    while(temp!='(')
                    {
                            postfix[j]=temp;
                            j++;
                            temp=pop();
                    }
                    break;
                    case '+':
                    case '-':
                    case '*':
                    case '/':
                    case '^':
                    while(preced(stack[top])>=preced(symbol))
                    {
                            temp=pop();
                            postfix[j]=temp;
                            j++;
                    }
                    push(symbol);
                    break;
                    default: postfix[j]=symbol;
                    break;
            }
            i++;
      }
      while(top!=-1)
      {
               postfix[j]=pop();
      }

             postfix[j++]='\0';
       puts(postfix);
}     