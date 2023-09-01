#include <stdio.h>

void main() {
    int num1, num2;
    char op;

    printf("Enter the first number:\n");
    scanf("%d", &num1);

    printf("Enter the second number:\n");
    scanf("%d", &num2);

    printf("Enter the operator:\n ");
    scanf(" %c" , &op);

    switch (op) {
        case '+':printf("Additon=%1d", num1 + num2);break;
        case '-':printf("Subtraction=%1d", num1 - num2);break;
        case '*':printf("Multiplication=%1d", num1 * num2);break;
        case '/':printf("divison=%1d",num1/num2);break;
        default :  printf("Invalid operator\n");break;
    }
}
