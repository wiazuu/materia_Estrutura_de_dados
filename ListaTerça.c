#include <stdio.h>

void questao1(){
    float quantidadeKM, calculo;
    int dias;

    printf("quantos Km rodado: ");
    scanf("%f", &quantidadeKM);
    printf("quantos de dias com o carro: ");
    scanf("%d", &dias);

    calculo = (90*dias) + (quantidadeKM * 0.20);

    printf("o valor total dara: %.2f", calculo);
}

void questao2(){
    float altura, largura, area, tinta;

    printf("altura: ");
    scanf("%f", &altura);
    printf("largura: ");
    scanf("%f", &largura);

    area = altura*largura;
    tinta = area / 2;

    printf("Quantidade de tinta: %f", tinta);
}

void questao3(){
    float a, b, c, delta;

    printf("Digite A:");
    scanf("%f", &a);

    printf("Digite B:");
    scanf("%f", &b);

    printf("Digite C:");
    scanf("%f", &c);

    delta = (b * b) -4 * a * c;

    printf("valor de delta é: %.2f", delta);
}

void questao4(){
    int velocidade_carro, multa;

    printf("velocidade carro: ");
    scanf("%d", &velocidade_carro);

    if (velocidade_carro > 80){
        multa =( velocidade_carro - 80) * 5;

    printf("Sua Multa sera de: %d ", multa);
    }else{
        printf("Nao Tera Multa");
    }
}

void questao5(){
    int km;
    float preco;

    printf("quantos km:");
    scanf("%d", &km);

    if (km <= 200)
    {
        preco = km * 0.50;
        printf("Voce pagara: R$%.2f", preco);
    }else{
        preco = km * 0.45;
        printf("voce pagara: R$%.2f", preco);
    }
}

void questao6(){

    const float valorHomem = 0.05;
    const float valorMulher = 0.13;
    float valorDesconto, valorProduto;
    int identificador;


    printf("Valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Voce e Homem ou Mulher (01=Homem), (02= Mulher): ");
    scanf("%d", &identificador);

    if (identificador == 1)
    {
        printf("seu produto tera desconto de 5%%\n");
        valorDesconto = valorHomem * valorProduto;
        printf("total do produto: R$%.2f", valorProduto-valorDesconto);
    }else if (identificador == 2)
    {
        printf("seu produto tera desconto de 13%%\n");
        valorDesconto = valorMulher * valorProduto;
        printf("total do produto: R$%.2f", valorProduto-valorDesconto);
    }else if (identificador != 1 || identificador != 2)
    {
        printf("nao e nenhum dos dois");
    }
    
}

void questao7(){
     float largura, comprimento;
     float area = largura * comprimento;

    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);
    
    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);

    printf("A área do terreno é: %.2f m².\n", area);
    

    if (area < 100) {
        printf("Classificação: TERRENO POPULAR\n");
    } else if (area >= 100 && area <= 500) {
        printf("Classificação: TERRENO MASTER\n");
    } else {
        printf("Classificação: TERRENO VIP\n");
    }
}

void questao8(){
    char nome[50];
    float salario, novoSalario;
    int anosTrabalho;

    printf("Digite o nome do funcionario: ");
    scanf("%49s", nome);  
    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    printf("Digite quantos anos ele trabalha na empresa: ");
    scanf("%d", &anosTrabalho);

    if (anosTrabalho < 3) {
        novoSalario = salario * 1.03;
    } else if (anosTrabalho >= 3 && anosTrabalho < 10) {
        novoSalario = salario * 1.125;
    } else {
        novoSalario = salario * 1.20;
    }

    printf("O novo salario de %s eh: R$ %.2f\n", nome, novoSalario);
}

void questao9(){
    float lado1, lado2, lado3;


    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o valor do segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &lado3);


    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) 
    {
        if (lado1 == lado2 && lado2 == lado3) 
        {
            printf("O triângulo é EQUILÁTERO.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) 
        {
            printf("O triângulo é ISÓSCELES.\n");
        } else 
        {
            printf("O triângulo é ESCALENO.\n");
        }
    } else 
    {
        printf("Os valores informados não formam um triângulo.\n");
    }

}

void questao10(){
    float valorCasa, salario, prestacaoMensal;
    int anos;

    printf("Digite o valor da casa: R$ ");
    scanf("%f", &valorCasa);
    
    printf("Digite o salario do comprador: R$ ");
    scanf("%f", &salario);
    
    printf("Digite em quantos anos pretende pagar: ");
    scanf("%d", &anos);


    prestacaoMensal = valorCasa / (anos * 12);  


    if (prestacaoMensal > (0.30 * salario)) {
        printf("Emprestimo negado. A prestacao mensal de R$ %.2f excede 30%% do salario.\n", prestacaoMensal);
    } else {
        printf("Emprestimo aprovado. A prestacao mensal sera de R$ %.2f.\n", prestacaoMensal);
    }
}

void questao11(){
        int opcao;
    float valor1, valor2, resultado;


    printf("Escolha a operacao desejada:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Digite o numero da operacao: ");
    scanf("%d", &opcao);

   
    if (opcao < 1 || opcao > 4) {
        printf("Operacao invalida!\n");
        return 1; 
    }

   
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

   
    switch (opcao) {
        case 1:
            resultado = valor1 + valor2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 2:
            resultado = valor1 - valor2;
            printf("Resultado da subtracao: %.2f\n", resultado);
            break;
        case 3:
            resultado = valor1 * valor2;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;
        case 4:
            
            if (valor2 == 0) {
                printf("Erro: divisao por zero!\n");
            } else {
                resultado = valor1 / valor2;
                printf("Resultado da divisao: %.2f\n", resultado);
            }
            break;
    }
}

int main(){
    // chamar a funçao decorrente a questao que voce quer
    //exemplo abaixo
    questao6();
    return 0;
}