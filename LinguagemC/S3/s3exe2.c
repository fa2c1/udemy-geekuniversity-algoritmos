#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    float est_medio, min, max;

    printf("\nAlgoritmos Exercicio 03\n\n");

    printf("Digite o estoque minimo: ");
    scanf("%f", &min);

    printf("Digite o estoque maximo: ");
    scanf("%f", &max);

    est_medio = (min + max) /2;

    printf("\n");
    printf("O valor do estoque medio e de: %.2f ", est_medio);

    printf("\n\n");
    system ("pause");

    return (0);
}
