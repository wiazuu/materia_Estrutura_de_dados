#include <stdio.h>
int main() {
    int vetor[10];

    printf("pass:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("pass1:\n");
    for(int i = 0; i < 10; i++) {
        if(vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
    return 0;
}
