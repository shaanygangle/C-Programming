//Wap to check if given character is digit or not
#include<stdio.h>
int main(){
  char ch;
  printf("Enter any character");
  scanf("%c",&ch);

  if(ch>='0' && ch<='9'){
  printf("%c is Digit",&ch);
  }

  else
  {
    printf("%c is not a digit",&ch);
  }
  return 0;
}
