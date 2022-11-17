#include<stdio.h>
int main(){
  char ch;
  printf("Enter char");
  scanf("%c",&ch);

  if(ch>='a' && ch<='z'){
    printf("%c is Lowercase Charactor",ch);
  }
  else if(ch>='A' && ch<='Z'){
    printf("%c is Upperercase Charactor",ch);
  }
  else{
    printf("%c is Invalid INput",ch);
  }
  return 0;
}
  
