// Sum of two numberss using function
#include<stdio.h>

int sum(int a,int b);

int main() {
  int a,  b;
  printf("Enter 1st number \n");
  scanf("%d",&a);
  printf("Enter 2nt number \n");
  scanf("%d",&b);

  int s= sum(a,b);
   printf("The sum is %d \n",s );
  return 0;
}

int sum(int x,int y) {
   return x+y;
}
