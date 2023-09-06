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
    int N1;
    int N2;
    int numero1 = N1;


    printf("Digite o primeiro número: ");
    scanf("%d", &N1);

    printf("Digite o segundo número: ");
    scanf("%d", &N2);

    printf("Números primos no intervalo de %d até  %d : ", N1, N2);


    while (numero1 <= N2) {
        if (primo(numero1)) {
            printf("%d ", numero1);
        }
        numero1++;
    }

    printf("\n");

}

