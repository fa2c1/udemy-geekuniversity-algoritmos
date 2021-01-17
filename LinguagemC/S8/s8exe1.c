#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nAlgoritmos Exercicio 25\n\n");
    
    int vetor[5], pares[5], cont_p = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("informe um valor para o vetor: ");
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
        {
            if (vetor[i] > 0)
            {
                pares[cont_p] = vetor[i];
                cont_p = cont_p + 1;
            }

        }
        
    }

    printf("\n");

    for (int i = 0; i < cont_p; i++)
    {
        printf("Numeros pares digitado %d\n", pares[i]);
    }    

    printf("\n");
    system ("pause");

    return (0);
}