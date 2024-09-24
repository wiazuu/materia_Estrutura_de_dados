#include <stdio.h>

void imc() {
    float peso, altura, calculo;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    calculo = peso / (altura * altura);
    printf("Seu IMC e: %.2f \n", calculo);

    if (calculo < 18.5) {
            printf("Voce esta abaixo do peso");
        } else if (calculo >= 18.5 && calculo <= 24.9) {
            printf("Voce esta com o peso normal");
        } else if (calculo >= 25 && calculo <= 29.9) {
            printf("Voce esta com sobrepeso");
        } else if (calculo >= 30 && calculo <= 34.9) {
            printf("Voce esta com obesidade grau 1");
        } else if (calculo >= 35 && calculo <= 39.9) {
            printf("Voce esta com obesidade grau 2");
        } else {
            printf("Voce esta com obesidade grau 3");
    }
}


int main() {
    imc();
    return 0;
}