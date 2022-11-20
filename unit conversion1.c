//Write a function to convert celsius to fahrenheit
#include<stdio.h>

float convert(float a); //Funcion Decleration

int main(){
  int a=37;
  printf("The converted temperature is %f",convert(a) );
  return 0;
}

//function Defination
float convert(float a){
  float F=a*1.8+32;
  return F;
}
