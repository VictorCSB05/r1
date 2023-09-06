#include <stdio.h>

int mult(int num ) {
  int multiplicador = 1;
  int multi;
  while (multiplicador <= 10) { 
    multi= num * multiplicador;
    printf("%d \n", multi);
    multiplicador++;
    
    
  }
  return multi;
}

int main() 
{
  int numero;
  int s;
  printf("digite o numero: ");
  scanf("%d", &numero);

  s = mult(numero);

  printf("a tabuada é: %d ", s);
}
