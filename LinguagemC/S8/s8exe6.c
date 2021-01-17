#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nAlgoritmos Exercicio 30\n\n");
    
    float vetor[5];
    int codigo;

    printf("Informe o codigo: ");
    scanf("%d", &codigo);

    printf("\n");
    
    if (codigo != 0)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("Informe um numero real :");
            scanf("%f", &vetor[i]);
        }
        if (codigo == 1)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("Impressao dos vetores na ordem normal digitada: %.2f\n", vetor[i]);
            }
            
        }
        if (codigo == 2)
        {
            for (int i = 4; i >= 0; i--)
            {
                printf("Impressao na ordem inversa da digitada: %.2f\n", vetor[i]);
            }            
        }
        if (codigo != 1 && codigo != 2)
        {
            printf("Codigo Incorreto!!!\n");
            printf("Sua Solicitação não pode ser processada.");
        }
    }    

    printf("\n\n");
    system ("pause");

    return (0);
}