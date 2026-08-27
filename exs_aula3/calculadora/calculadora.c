#include <stdio.h>
#include "calculadora.h"

int main()
{
    int opcao, a, b;

    printf("Qual operacao voce quer fazer? \nAdicao:1\nSubtracao:2\nMultiplicacao:3\nDivisao:4\n");
    scanf("%d", &opcao);

    printf("Numero 1: ");
    scanf("%d", &a);

    printf("Numero 2: ");
    scanf("%d", &b);

    if (opcao == 1) {
        printf("Resultado: %d\n", soma(a, b));
    }
    else if (opcao == 2) {
        printf("Resultado: %d\n", subt(a, b));
    }
    else if (opcao == 3) {
        printf("Resultado: %d\n", multi(a, b));
    }
    else if (opcao == 4) {
        printf("Resultado: %d\n", div(a, b));
    }
}