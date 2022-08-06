#include <stdio.h>
int main(){
  int num1,num2,temp;
  printf("Enter value of num1: \n");
  scanf("%d",&num1);
  printf("Enter value of num2: \n");
  scanf("%d",&num2);
  temp = num1;
  num1 = num2;
  num2 =  temp;
  printf("After swaping: num1 = %d, num2 = %d", num1, num2);
  return 0;
}
