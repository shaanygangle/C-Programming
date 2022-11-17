// Sum of n natural numbers wher start and end point is given by user
#include<stdio.h>
int main(){
  int n,m;
  printf("Enter the starting number\n");
  scanf("%d",&n);
  printf("Enter the ending number\n");
  scanf("%d",&m);

  int x=0;
  //USing for loop
  for(int i=n;i<=m;i++){
  x=x+i;

}
  printf("Sum of numbers is %d \n",x );

  return 0;
}
