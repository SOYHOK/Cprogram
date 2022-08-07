#include <stdio.h>
#include <math.h>
// Ask the user to enter the input
int main(){
  float InitialTemperature;// in degrees Celsius
  float FinalTemperature;// in degrees Celsius
  float M;//weight of water in kilogram
  printf("Enter the InitialTemperature: \n");
  scanf("%f",&InitialTemperature);
  printf("Enter the FinalTemperature: \n");
  scanf("%f",&FinalTemperature);
  printf("Enter the weight of water: \n");
  scanf("%f",&M);
  float Q= M*(FinalTemperature-InitialTemperature)*4184 ; // Q is in Joules
  printf("Q=%.2f Joules",Q);
  return 0;
}
