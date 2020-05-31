#include <stdio.h>

int main(){

  float  fahrenheit , celsius;

  printf("Enter fahrenheit:");
  scanf("%f",&fahrenheit);
  celsius = (fahrenheit - 32.0)/1.8;
  printf("\n%4.3f fahrenheit is %4.3f celsius.\n",fahrenheit, celsius );
  return 0;
}
