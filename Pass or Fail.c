/*wap to print if the student is pass or Fail
 marks>=30 && marks<=100 are pass
 marks>=0 && marks<30 are Fail
 Other : INvalid input*/
#include<stdio.h>
int main(){
  int m ;
  printf("Enter the markes",m);
  scanf("%d",&m);
   if(m>=0 && m<=30){
     printf("Fail \n");
   }
   else if(m>30 && m<=100){
   printf("pass \n");
   }
   else{
     printf("Invalid input");
   }

  // m<=30? printf("Fail") : printf("Pass");

  // Isko Switch ka use kar ke bana ke dekhna hai!!!
 printf("Thank You \n");
 return 0;
}
