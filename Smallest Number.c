// Wap tp print the smallest number
#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter the first Number");
  scanf("%d",&a);
  printf("Enter the Second Number");
  scanf("%d",&b);
  printf("Enter the Third Number");
  scanf("%d",&c);

  if(a<b && a<c){
    printf("%d is the smallest number",a);
    }
  else if(b<a && b<c){
    printf("%d is the smallest number",b);
    }
  else{
    printf("%d is the smallest Number",c);
  }
  return 0;
}
