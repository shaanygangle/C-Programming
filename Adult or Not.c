#include<stdio.h>
int main(){
  int age;
  printf("Enter Your age");
  scanf("%d",&age);

  if(age>=18){
    printf("Age %d is Adult",age);
  }

  else if(age>=13 && age<18){
    printf("Age %d is Teenage",age);
  }

  else{
    printf("Age %d is childage",age);
  }
  return 0;
} 
