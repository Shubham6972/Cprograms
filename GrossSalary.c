//calculating Gross Salary 

#include<stdio.h>
int main(){
    float basicPay , grossPay ,da , hra;

    printf("Enter Basic salary\n");
    scanf("%f" , &basicPay);

    da = (40 * basicPay)/100;
    hra = (20 * basicPay)/100;
    grossPay = da + hra + basicPay;

    printf("Gross Salary is: %f" , grossPay);
    return 0;
}