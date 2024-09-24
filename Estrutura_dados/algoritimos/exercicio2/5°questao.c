#include <stdio.h>


void desconto(){
    char nome_produto[30];
    float valorNomal, desconto, total; 

    printf("escreva o nome do produto: ");
    scanf("%s", nome_produto);

    printf("valor do produto: ");
    scanf("%f", &valorNomal);

    desconto = 0.10 * valorNomal;

    total = valorNomal - desconto;

    printf("seu produto e %s\nvalor total do produto %.2f, valor com desconto %.2f", nome_produto, valorNomal, total);

}

int main(){
    desconto();
    return 0;
}