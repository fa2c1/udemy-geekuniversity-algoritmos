#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nAlgoritmos Exercicio 26\n\n");
    
    int vetor1[10], vetor2[10], soma[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Informe o valor para o primeiro vetor: ");
        scanf("%d", &vetor1[i]);
        printf("Informe o valor para o segundo vetor: ");
        scanf("%d", &vetor2[i]);
        soma[i] = vetor1[i] + vetor2[i];
    }

    printf("\n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("A soma dos vetores 1 + vetor 2 digitados foram %d\n", soma[i]);
    }    

    printf("\n");
    system ("pause");

    return (0);
}