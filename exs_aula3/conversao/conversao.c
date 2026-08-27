#include <stdio.h>
#include "conversao.h"

int main()
{
    int opcao, opcao2;
    float c, f, m, k, s, h;
    printf("O que voce quer fazer? \nTemperatura:1\nMedida:2\nTempo:3\n");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("O que voce quer fazer? \nCelius para Fahrenheit:1\nFahrenheit para Celius:2\n");
        scanf("%d", &opcao2);
        if (opcao2 == 1){
            printf("Temperatura em Celsius? ");
            scanf("%f", &c);
            cf(c);
        }
        else if (opcao2 == 2){
            printf("Temperatura em Fahrenheit? ");
            scanf("%f", &f);
            fc(f);
        }
    }
    else if (opcao == 2){
        printf("O que voce quer fazer? \nMetros para km:1\nKm para metros:2\n");
        scanf("%d", &opcao2);
        if (opcao2 == 1){
            printf("Medida em metros? ");
            scanf("%f", &m);
            mk(m);
        }
        else if (opcao2 == 2){
            printf("Medida em km? ");
            scanf("%f", &k);
            km(k);
        }
    }
    else if (opcao == 3){
        printf("O que voce quer fazer? \nSegundos para horas:1\nHoras para segundos:2\n");
        scanf("%d", &opcao2);
        if (opcao2 == 1){
            printf("Tempo em segundos? ");
            scanf("%f", &s);
            sh(s);
        }
        else if (opcao2 == 2){
            printf("Tempo em horas? ");
            scanf("%f", &h);
            hs(h);
        }
    }
}