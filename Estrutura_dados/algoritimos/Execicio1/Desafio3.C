#include <stdio.h>

int main() {
    float nota, soma = 0;
    int contador = 0;

    do {
        printf("pass 1: ");
        scanf("%f", &nota);

        if (nota >= 0) {
            soma += nota;
            contador++;
        }
    } while (nota >= 0);

    if (contador > 0) {
        float media = soma / contador;
        printf("pass 2 : %.2f\n", media);
    } else {
        printf("pass 3.\n");
    }

    return 0;
}
