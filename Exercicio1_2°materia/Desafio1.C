#include <stdio.h>
int main() {
    int vetor[10];

    //puxar os numeros
    printf("Digite 10 numeros inteiros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    //ver oque sao pares e mostrar 
    printf("Números pares:\n");
    for(int i = 0; i < 10; i++) {
        if(vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
    return 0;
}
