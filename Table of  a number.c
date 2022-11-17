// TO Print the table of a given number,Number is given by user
#include<stdio.h>
int main(){
  int i,n;
  printf("Enter a number");
  scanf("%d",&n );

  for(i=n;i<=10*n;i=i+n){
    printf("%d\n",i);
  }

  return 0;
}
