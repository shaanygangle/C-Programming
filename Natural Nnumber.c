//given Number is a neatural number or not
#include<stdio.h>
int main(){
  int num;
  printf("Enter char");
  scanf("%d",&num);

  if (num>=1) {
    printf("%d is Natural NUmber",num);
  }

  else{
    printf("%d is Not a natural number",num);
  }
  return 0;
}
