#include <stdio.h>

int main()
{
    float q1;
    float q2;
    float q3;
    float q4;
    float q5;
    float q6;
    float D=5.21;
    float R;

    printf("Quantas moedas de 1 Dolar");
    scanf("%f", &q1);
    printf("Quantas moedas de US$0,50");
    scanf("%f", &q2);
    printf("Quantas moedas de US$0,25");
    scanf("%f", &q3);
    printf("Quantas moedas de US$0,10");
    scanf("%f", &q4);
    printf("Quantas moedas de US$0,05");
    scanf("%f", &q5);
    printf("Quantas moedas de US$0,01");
    scanf("%f", &q6);

    R = (q1+0.5*q2+0.25*q3+0.1*q4+0.05*q5+0.01*q6)* D;

    printf("O valor total e de R$ %f", R);
}