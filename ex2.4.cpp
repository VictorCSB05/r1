#include <stdio.h>

float c2f (float c) {
  return 1.8*c + 32;
}

float f2c (float f) {
  return f-1.8/ 32;
}

int main () {
  float temperatura;
  float num1;
  float num2;
  printf("digite se quer saber a temperatura em Celcius(1) ou em Fahrenheit(2): ");
  scanf("%f", &temperatura);
  if (temperatura == 1) {
    printf("digite a temperatura em Celcius: ");
    scanf("%f", &num1);
    printf("temperatura em fahrenheit: %f" , c2f(num1) );
    
  }
  if (temperatura == 2) {
    printf("digite a temperatura em Fahrenheit: ");
    scanf("%f", &num2);
    printf("temperatura em fahrenheit: %f" , c2f(num2) );
    
  }
  
}