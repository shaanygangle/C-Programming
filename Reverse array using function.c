//To count odd no in array using function
#include<stdio.h>

int countodd(int arr[], int n);
// void reverse(int arr[], int n);
// void printarr(int arr[],int n);

int main(){
  int arr[]={1,2,3,4,5,6,7,8,9};
  printf("The number of odd num is %d\n",countodd(arr,9));
  // reverse(arr,9);
  // printarr(arr,9);

  return 0;
}

// void printarr(int arr,int n){
//   for(int i=0; i<n;i++){
//     printf("%d\t",arr[i]);
//   }
//   printf("\n");
// }
//
// void reverse(int arr[], int n){
//   for(int i=0; i=n/2;i++){
//     int firstval=arr[1];
//     int secondval=arr[n-i-1];
//     arr[i]=secondval;
//     arr[n-i-1]=firstval;  
//   }
// }

int countodd(int arr[], int n){
int count=0;
for (int i=0;i<n;i++){
  if(arr[i]%2!=0)
  count++;
}
  return count;
}
