//TO print number between a range given by user
#include<stdio.h>
int main(){
  int i,n;
  printf("Enter the starting number\n");
  scanf("%d",&i);
  printf("Enter the Last number\n");
  scanf("%d",&n);

  int x=i;
  while (x<=n) {
    printf("%d \n",x);
    x=x+1;
  }
  return 0;
}
