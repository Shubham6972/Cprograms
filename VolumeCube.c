// finding volume of cube.

#include<stdio.h>
#include<math.h>
int main(){
    float radius,volume;

    printf("Enter radius of cirle:\n");
    scanf("%f" , &radius);

    volume = ((4*3.14) * (pow(radius , 3))) / 3;

    printf("Volume of Sphere is: %f" , volume);
    return 0;
}