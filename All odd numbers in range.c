// Sum of all odd  numbers wher start and end point is given by user
#include<stdio.h>
int main(){
  int n,m;
  printf("Enter the starting number\n");
  scanf("%d",&n);
  printf("Enter the ending number\n");
  scanf("%d",&m);

  int x=0;
    printf("All the odd numbers between the range are: \n" );
  //USing for loop
  for(int i=n;i<=m;i++){

    if(i%2!=0){
        printf("%d \n",i);
   }
}

  return 0;
}
