#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     char nome[100];
     double s, v, b;
     scanf("%s", &nome);
     scanf("%lf", &s);
     scanf("%lf", &v);
     b = v * 0.15;
     printf("TOTAL = R$ %.2lf\n", s+ b);
    return 0;
}