#include<stdio.h>
#include<stdlib.h>

int main(void){

	int num1, num2, soma, mult;

    printf("\nAlgoritmos Exercicio 01\n\n");

    printf("Digite o numero 1: ");
    scanf("%d", &num1);

    printf("Digite o numero 1: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    mult = soma * num1;
    
    printf("\n");
    printf("O resultado e: %d", mult);

    printf("\n\n");
    system ("pause");

    return (0);
}
