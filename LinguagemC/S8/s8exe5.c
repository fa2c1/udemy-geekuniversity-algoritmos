#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nAlgoritmos Exercicio 29\n\n");
    
    int vetor[10];
    char tem_maiores_50 = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor para o vetor %d/10: ", (i+1));
        scanf("%d", &vetor[i]);
    }

    printf("\n");
    
    for (int i = 1; i < 11; i++)
    {
        if (vetor[i] > 50)
        {
            printf("O numero %d esta na posicao %d\n", vetor[i], i);
            tem_maiores_50 = 1;
        }        
    }

    if (tem_maiores_50 < 1)
    {
        printf("Nao existe numeros maiores que 50.");
    }      

    printf("\n\n");
    system ("pause");

    return (0);
}