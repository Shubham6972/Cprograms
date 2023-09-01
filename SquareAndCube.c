// finding square and cube of a number.

#include<stdio.h>
#include<math.h>
int main(){
    float num;
     
     printf("Enter a Number:\n");
     scanf("%f" , &num);

     printf("SquareRoot is: %f\n" , sqrt(num));
     printf("CubeRoot is: %f" , cbrt(num));

    return 0;

}