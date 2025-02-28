#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int num;
     int hrs;
     float cph;
     float salary;
     scanf("%i", &num);
     scanf("%i", &hrs);
     scanf("%f", &cph);
     salary = hrs * cph;
     printf("NUMBER = %i\n", num);
     printf("SALARY = U$ %.2f\n", salary);
    return 0;
}