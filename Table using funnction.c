// Print the table of a number  using function
#include<stdio.h>

void table(int a); // Function Declear

int main() {
  int a;
  printf("Enter number \n");
  scanf("%d",&a);
  printf("The table of %d is : \n",a);
  table(a);  // Function Call
  // Here a is argument
  return 0;
}
// Function Defination
void table(int a) {  // Here a is papameter
  for(int i=1;i<=10;i++){
    printf("%d \n",i*a);
  }

}
 
