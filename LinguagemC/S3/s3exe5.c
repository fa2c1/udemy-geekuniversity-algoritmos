#include<stdio.h>
#include<stdlib.h>

int main(void){

    float metros, centimetros;

    printf("\nAlgoritmos Exercicio 05\n\n");
        
    printf("Digite o valor em metros: ");
    scanf("%f", &metros);
    printf("\n");

    centimetros = metros * 100;

    printf("Valor em metros:\t\t %.2f \n", metros);
    printf("Valor convertido em centimetros: %.2f\n", centimetros);

    printf("\n");
    system ("pause");

    return (0);
}
