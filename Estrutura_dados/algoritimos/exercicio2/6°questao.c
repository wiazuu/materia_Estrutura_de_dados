#include <stdio.h>



void calq(){
    float salario;

    printf("digite seu salario: ");
    scanf("%f", &salario);

    if (salario <= 2259.20){
        printf("Voce nao sera descontado no IR");
    }else if (salario >= 2259.21 && salario <= 2826.65)
    {
        printf("Voce tera um desconto de 7,5%\nTotal do seu salario com desconto: %.2f ", salario-(salario*0.075));
    }else if (salario >= 2826.66 && salario <= 3751.05)
    {
        printf("Voce tera um desconto de 15%\nTotal do seu salario com desconto: %.2f ", salario-(salario*0.15));
    }else if (salario >= 3751.06 && salario <= 4664.68)
    {
        printf("Voce tera um desconto de 22.5%\nTotal do seu salario com desconto: %.2f ", salario-(salario*0.225));
    }else
    {
        printf("Voce tera um desconto de 27.5%\nTotal do seu salario com desconto: %.2f ", salario-(salario*0.275));
    }
    
}

int main(){

    calq();

    return 0;
}