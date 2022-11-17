// Sum of first n natural numbers
#include<stdio.h>
int main(){
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  int x=0;

  //USing for loop
  for(int i=1;i<=n;i++){
  x=x+i;
}
  printf("Sum is %d \n Reversed Numbers \n",x);

  for(int i=n;i>=1;i=i-1){
   printf(" %d \n",i);
}
  return 0;
}
