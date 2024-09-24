#include <stdio.h>

int main() {
    char* itens[] = {"Arroz", "Feijao", "Macarrao"}; 
    float precos[] = {25.0, 10.0, 7.5}; 
    int escolha;


    printf("Escolha um produto:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s: %.2f reais\n", i + 1, itens[i], precos[i]);
    }
    printf("Digite o nmero do produto desejado: ");
    scanf("%d", &escolha);

    if (escolha >= 1 && escolha <= 3) {
        printf("Voce escolheu: %s, que custa %.2f reais\n", itens[escolha - 1], precos[escolha - 1]);
    } else {
        printf("Escolha invalida. Por favor, escolha um numero entre 1 e 3.\n");
    }

    return 0;
}
