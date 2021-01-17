#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nAlgoritmos Exercicio 28\n\n");
    
    int vetor[20], soma = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite o valor do vetor %d/20: ", (i+1));
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }

    printf("\n");

    printf("A soma dos vetores e %d", soma);

    printf("\n\n");
    system ("pause");

    return (0);
}