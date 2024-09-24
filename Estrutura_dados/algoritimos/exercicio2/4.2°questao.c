#include <stdio.h>
#include <time.h>

int main(){
    int ano;
    char nome[32];

    printf("digite seu nome: ");
    scanf("%s", &nome);

    printf("digite em que ano voce nasceu: ");
    scanf("%d", &ano);

    time_t t=time(NULL);
    struct tm tm=*localtime(&t);
    int anoAtual=tm.tm_year+1900;

    printf("seu nome e %s e voce nasceu em %d e voce tem %d anos", nome, ano, anoAtual-ano);
    return 0;
}