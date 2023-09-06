
#include <stdio.h>

bool primo(int numero) {
    if (numero <= 1) {
        return false;  
    }

    int i = 2;
    while (i * i <= numero) {
        if (numero % i == 0) {
            return false; 
        }
        i++;
    }

    return true;  
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (primo(numero)) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }
}
