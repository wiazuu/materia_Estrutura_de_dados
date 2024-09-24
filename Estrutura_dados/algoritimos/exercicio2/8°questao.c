#include <stdio.h>

void calcular_media() {
    int numero, soma = 0;
    int quantidade = 5;

    for (int i = 1; i <= quantidade; i++) {
        printf("Digite o número %d: ", i);
        scanf("%d", &numero);
        soma += numero;
    }
    float media = (float)soma / quantidade;
    printf("A média é: %.2f\n", media);
}

int main() {
    calcular_media();
    return 0;
}
