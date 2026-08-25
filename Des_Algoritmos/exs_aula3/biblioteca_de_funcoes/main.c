#include <stdio.h>
#include "lib.h"

int main()
{
    int opcao, n, m;
    printf("O que voce quer fazer? \nVerificar se e par ou impar:1\nSe e primo:2\nCalcular fatorial:3\nEncontrar o maior:4\nCalcular potencia:5\n");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("Numero: ");
        scanf("%d", &n);
        par(n);
    }
    else if (opcao == 2){
        printf("Numero: ");
        scanf("%d", &n);
        primo(n);
    }
    else if (opcao == 3){
        printf("Numero: ");
        scanf("%d", &n);
        fatorial(n);
    }
    else if (opcao == 4){
        printf("Numero 1: ");
        scanf("%d", &n);
        printf("Numero 2: ");
        scanf("%d", &m);
        maior(n, m);
    }
    else if (opcao == 5){
        printf("Numero 1: ");
        scanf("%d", &n);
        printf("Numero 2: ");
        scanf("%d", &m);
        potencia(n, m);
    }
}