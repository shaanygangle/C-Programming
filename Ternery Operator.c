#include<stdio.h>
int main(){
  int age;
  printf("Enter Your age");
  scanf("%d",&age);

  age>=18 ? printf("%d is Adult",age) : printf("%d is Not an Adult",age);
  return 0;
}
