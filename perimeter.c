#include<stdio.h>
int main(){
    float length,breadth,perimeter;
    printf("enter length");
    scanf("%f" , &length);
    
    printf("enter breadth");
    scanf("%f" , &breadth);
    
    perimeter = 2*(length + breadth);

    printf("perimeter is %f" , perimeter);
    return 0;
}