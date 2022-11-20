//To print nth term of fibonacci series using function
#include<stdio.h>

int fibo(int n); //Funcion Decleration

int main(){

  printf("Nth term of fibonacci series is %d \n",fibo(6));
  return 0;
}

//function Defination
int fibo(int n){
  if(n==0){  //Base case
    return 0;
  }
  if(n==1){
    return 1;
  }
  int fiboNm1=fibo(n-1);
  int fiboNm2=fibo(n-2);
  int fiboN=fiboNm1+fiboNm2;
  return fiboN;
}
