//Keep taking number input until user enters an odd number
#include<stdio.h>
int main() {
  int n;
  do {
    printf("Enter number");
    scanf("%d",&n);
    printf("%d \n",n);

    if(n%2!= 0){
      break;
    }
  } while(1);
  printf("Thank You");
  return 0;
}
