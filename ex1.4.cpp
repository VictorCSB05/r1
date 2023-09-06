#include <stdio.h>

float soma(float x, float y, float z) {
  return x + y + z;
}

int main() {
  float num1;
  float s;
  float num2;
  float num3;
  printf("digite o primeiro numero");
  scanf("%f", &num1);

  printf("digite o segundo numero");
  scanf("%f", &num2);

  printf("digite o terceiro numero");
  scanf("%f", &num3);

  s=soma(num1, num2, num3);

  printf("a soma dos tres valores é: %.2f ",s );
}
