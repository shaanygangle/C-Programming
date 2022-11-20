//To caovert c to f
#include<stdio.h>

float percent(float a,float b,float c); //Funcion Decleration

int main(){
  int a=37,b=75,c=95;

  printf("Total percentecge is %f",percent(a,b,c) );
  return 0;
}

//function Defination
float percent(float a,float b,float c){
  float P=((a+b+c)/3);
  return P;
}
