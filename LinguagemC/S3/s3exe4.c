#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    int n1, n2, resultado;

    printf("\nAlgoritmos Exercicio 04\n\n");

    printf("Calcule a Soma\n");

    printf("Digite o primeiro numero: \t");
    scanf("%d", &n1);

    printf("Digite o segundo numero: \t");
    scanf("%d", &n2);
    printf("\n");

    resultado = n1 + n2;

    printf("A soma dos numeros digitados e: %d", resultado);

    printf("\n\n");
    system ("pause");

    return (0);
}
