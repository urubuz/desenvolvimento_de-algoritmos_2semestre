#include <stdio.h>
#include "conversao.h"

int main()
{
    int opcao, opcao2, c;
    printf("O que voce quer fazer? \nTemperatura:1\nMedida:2\nTempo:3\n");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("O que voce quer fazer? \nC para F:1\nF para C:2\n");
        scanf("%d", &opcao2);
        if (opcao2 == 1){
            printf("Temperatura em C? ");
            scanf("%d", &c);
            cf(c);
        }
    }
}