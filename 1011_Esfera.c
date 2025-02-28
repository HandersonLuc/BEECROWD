#include <stdio.h>
#include <math.h>

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double r, volume;
     double pi = 3.14159;
     scanf("%lf", &r);
     float a;
     volume = (4.0/3.0) * pi * pow(r,3);
     printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}