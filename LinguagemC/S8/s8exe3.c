#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nAlgoritmos Exercicio 27\n\n");
    
    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor para o vetor: ");
        scanf("%d", &vetor[i]);
    }

    printf("\n");
    
    for (int i = 9; i >= 0; i--)
    {
        printf("Vetores digitados ba ordem inversa: %d\n", vetor[i]);
    }    

    printf("\n");
    system ("pause");

    return (0);
}