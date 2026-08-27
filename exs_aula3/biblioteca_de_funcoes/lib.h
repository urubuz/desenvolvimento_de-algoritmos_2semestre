#include <stdio.h>
#include <math.h>

int par(int n){
    if (n % 2 == 0){
        printf("O numero e par");
    }
    else{
        printf("O numero e impar");
    }
}
int primo(int n){
    int i, primo = 1;

    if (n <= 1) {
        primo = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                primo = 0;
                break;
            }
        }
    }
    if (primo){
        printf("O numero e primo");
    }
    else{
        printf("O numero nao e primo");
    }
}
int fatorial(int n){
    long long fat = 1;
    for (int i = n; i > 1; i--){
        fat *= i;
    }
    printf("O fatorial é %lld", fat);
}
int maior(int n, int m){
    if (n>m){
        printf("O maior numero e %d", n);
    }
    else if (m>n){
        printf("O maior numero e %d", m);
    }
}
int potencia(int n, int m){
    int pot = pow(n, m);

    printf("A potencia e %d", pot);
}