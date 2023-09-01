#include <stdio.h>
#include <ctype.h>
#define SIZE 100 
#define POSTFIX  100

int stack[SIZE];
int top = -1;

void push(int item)
{
    top = top + 1;
    stack[top] = item;
    
}

int pop()
{
    int item;
    item = stack[top];
    top = top - 1;
    return item;
    
}

void answer(char postfix[])
{

    int i,value,op1,op2;
    char ch;

    for (i = 0; postfix[i] != '\0'; i++) {
        ch = postfix[i];
        if (isdigit(ch)) {
            push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            op1 = pop();
            op2 = pop();

            switch (ch) /* ch is an operator */
            {
            case '*':
                value = op2*op1;
                break;

            case '/':
                value = op2/op1;
                break;

            case '+':
                value = op2+op1;
                break;

            case '-':
                value = op2-op1;
                break;
            }
            push(value);
        }
    }
    printf("Result of expression evaluation : %d \n", pop());
}

void main()
{

    int i,size;
    char postfix[POSTFIX];
    printf("Enter size of postfix\n");
    scanf("%d",&size);

    for (i = 0;i<=size;i++) {
        scanf("%c", &postfix[i]);

    }
    answer(postfix);
}