#include <stdio.h>

void vidas(){

    float salario;

    printf("escreva o seu salario: ");
    scanf("%f", &salario);


    if (salario <=2000){
        printf("seu salario teve ajuste de 10%%, salario base: %.2f, salario com ajuste: %.2f", salario, salario+(salario*0.10));
    }else{
        printf("seu salario teve ajuste de 5%%, salario base: %.2f, salario com ajuste: %.2f", salario, salario+(salario*0.05));
    }
}

int main(){

    vidas();

    return 0;
}