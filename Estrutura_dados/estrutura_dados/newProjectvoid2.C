#include <stdio.h>
void parOrImpar(int a) {
    if (a % 2 == 0) {
        printf("seu numero e par\n");
    } else {
        printf("seu numero e impar\n");
    }
}
void ver_divisor_de_3(int a) {
    printf("qual o valor para verificar se e divisivel por 3?\n");
    scanf("%d", &a);
    if (a % 3 == 0) {
        printf("seu numero e divisivel por 3\n");
    } else {
        printf("seu numero nao e divisivel por 3\n");
    }
}

void cubodoValor(int a){
    printf("qual o valor para Calcular o cubo?\n");
    scanf("%d", &a);
    printf("o cubo do valor e: %d\n", a*a*a);
}

int main()
{
    parOrImpar(10);
    printf("\n------------------------------------------\n");
    ver_divisor_de_3(10);
    printf("\n------------------------------------------\n");
    cubodoValor(1);
    return 0;
}
