#include <stdio.h>

float cf(float a){
    float f = (9*a)/5 +32;

    printf("Em Fahrenheit fica: %.0f graus", f);
}
float fc(float a){
    float c = (a-32)/1.8;

    printf("Em Celsius fica: %.0f graus", c);
}
float mk(float a){
    float k = a/1000;

    printf("Em km fica: %.2f km", k);
}
float km(float a){
    float m = a*1000;

    printf("Em metros ficam: %f metros", m);
}
float sh(float a){
    float h = a/1200;

    printf("Sao: %f horas", h);
}
float hs(float a){
    float s = a*1200;

    printf("Sao: %f segundos", s);
}