//Keep taking number input until user enters an multiple of 7
#include<stdio.h>
int main() {
  int n;
  do {
    printf("Enter number");
    scanf("%d",&n);
    printf("%d \n",n);

    if(n%7 == 0){ //multipleof 7
      break;
    }
  } while(1);
  printf("Thank You");
  return 0;
}
