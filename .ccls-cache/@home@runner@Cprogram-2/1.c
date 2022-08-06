#include <stdio.h>
#define _USE_MATH_DEFINE
#include <math.h>
int main(){
  // Enter radius and lenght
  float radius;
  float lenght;
  printf("Enter the radius: \n");
  scanf("%f",&radius);
  printf("Enter the lenght: \n");
  scanf("%f",&lenght);
  float area= pow(radius,2)* M_PI; 
  float volume= area * lenght;
  printf("volume=%.2f",volume);
  return 0;
}