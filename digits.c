#include<stdio.h>
int main(){
    int num,sum,dig;
    sum=0;
    scanf("%d",&num);
    while(num!=0){
        dig=num%10;
        sum=(sum*10)+dig;
        num=num/10;
    }
    while(sum!=0){
        switch(sum%10){
            case 0 : printf("Zero ");
            break;
            case 1 : printf("one ");
            break;
            case 2 : printf("two ");
            break;
            case 3 : printf("three ");
            break;
            case 4 : printf("four ");
            break;
            case 5 : printf("five ");
            break;
            case 6 : printf("six ");
            break;
            case 7 : printf("seven ");
            break;
            case 8 : printf("eight ");
            break;
            case 9 : printf("nine ");
            break;
        
        }
        sum=sum/10;
     }
    return 0;
}