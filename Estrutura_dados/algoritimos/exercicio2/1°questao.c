#include <stdio.h>


void circulo()
{
    float raio, calculo;

    printf("Forneca o Raio do Circulo: ");
    scanf("%f", &raio);

    calculo = 3.14 * (raio * raio);
    
    printf("A area do circulo e: %.2f", calculo);
}

int main(){

    circulo(0);

    return 0;
}