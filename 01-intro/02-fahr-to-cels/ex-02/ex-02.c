#include <stdio.h>

void main(){
  printf("Conversor Celsius -> Fahrenheith\n");

  float celsius, fahr;
  float lower, upper, step;

  lower = 0;
  upper = 100;
  step = 1;

  celsius = lower;
  while (celsius <= upper) {
    fahr = (celsius * 9 / 5) + 32;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
