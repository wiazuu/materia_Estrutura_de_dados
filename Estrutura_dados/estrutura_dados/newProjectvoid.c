#include <stdio.h>

void multiplication(int a, int b) {
    int result = a * b;
    printf("seu numero e %d\n", result);
}
void parOrImpar(int a) {
    if (a % 2 == 0) {
        printf("seu numero e par\n");
    } else {
        printf("seu numero e impar\n");
    }
}
void divisivelpor5(int a) {
    if (a % 5 == 0) {
        printf("seu numero e divisivel por 5\n");
    } else {
        printf("seu numero nao e divisivel por 5\n");
    }
}
void verFactorial(int a) {
    int result = 1;
    for (int i = 1; i <= a; i++) {
        result *= i;
    }
    printf("o fatorial de %d e %d\n", a, result);
}
void fazertabuada(int a) {
    int i;
    for (i = 1; i <= 10; i++) {
        int result = a * i;
        printf("%d x %d = %d\n", a, i, result);
    }
}
int main() {
    multiplication(2, 3);
    printf("\n------------------------------------------\n");
    parOrImpar(244);
    printf("\n------------------------------------------\n");
    divisivelpor5(2550);
    printf("\n------------------------------------------\n");
    verFactorial(10);
    printf("\n------------------------------------------\n");
    fazertabuada(15);
    printf("\n------------------------------------------\n");
    return 0;

}

