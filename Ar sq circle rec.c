#include<stdio.h>
#include<math.h>

float squarearea(float side);
float circlearea(float rad);
float rectarea(float a, float b);



int main(){

  float side=4.5;
  printf("Area of Square is %f \n", squarearea(side));

  float rad=7.2;
  printf("Area of circle is %f \n", circlearea(rad));
  
  float a=5.14;
  float b=10.14;
  printf("Area of Rectangle is %f \n", rectarea(a,b));

  return 0;
}

float squarearea(float side){
  return side*side;
}

float circlearea(float rad){
  return 3.14 *rad*rad;
}

float rectarea(float a, float b){
  return a*b;
}
