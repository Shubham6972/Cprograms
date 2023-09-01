#include<stdio.h>
#include<string.h>
#define SIZE 100

char stack[SIZE];
char infix[SIZE],postfix[SIZE];
int top=-1;

void main()
{
    printf("Enter infix Expression:\n");
    gets(infix);
}

void infixToPostfix()
{
    int i,j=0;
    char symbol,element;
    for(i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];
        switch(symbol)
        {
            case '(': push(symbol);
            break;

            case ')': while((element=pop()) != '(')
                      {
                        postfix[j++] = element;
                      }
                    break;
            default: postfix[j++] = symbol;

        }
    }  
}