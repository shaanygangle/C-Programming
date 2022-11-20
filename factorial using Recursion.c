//Factorial of n natural numbers
#include<stdio.h>

int fact(int n);

int main(){
  printf("Factorial is %d",fact(3));
  return 0;
}

int fact(int n){
  if(n==0){
    return 1;
  }
  int factNm1=fact(n-1); // Factorial of 1 to n
  int factN=factNm1*n;
  return factN;
}
