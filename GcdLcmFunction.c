#include<stdio.h>
int gcd(int,int);
int lcm(int,int);

int main(){
  int num1, num2;

  printf("Enter two numbers : ");
  scanf("%d %d",&num1, &num2);

  
  printf("The GCD of %d and %d = %d\n", num1, num2, gcd(num1,num2));
  printf("The LCM of %d and %d = %d",num1 ,num2 ,lcm(num1,num2));

  return 0;
}

int lcm(int a,int b){
    int Lcm;
    Lcm = a*b/gcd(a,b);
    return Lcm;
}

int gcd(int a, int b){
  int hcf,s;
   s = a<b?a:b;
  
  for(int i=2; i<=s;i++){
    if(a%i==0 && b%i==0){
      hcf = i;
    }
  }
  return hcf;
}