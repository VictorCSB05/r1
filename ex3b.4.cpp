#include <stdio.h>

void mult(int num) {
  int multiplicador = 1;
  int multi;
  while (multiplicador <= 9) { 
     multi = num * multiplicador;
    printf("%d x %d = %d\n", num, multiplicador, multi);
    multiplicador++;
  }
}

int main() {
  printf("tabuada de 1 a 9:\n");
  int numero = 1; 
  while (numero <= 9) { 
    mult(numero);
    numero++; 
  }
}

