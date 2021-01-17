#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    int maior = -999, menor = 999, soma = 0, valor;
    float media = 0;

    printf("\nAlgoritmos Exercicio 21\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor: ");
        scanf("%d", &valor);

        if (valor > 0)
        {
            if (valor > maior)
            {
                maior = valor;
            }
            if (valor < menor)
            {
                menor = valor;
            }
            else
            {
                i--;
            }
        }
        soma = soma + valor;
    }

    media = soma / 10; 
    
    printf("\n Maior Numero digitado: %d", maior);
    printf("\n Menor numero digitado: %d", menor);
    printf("\n Soma dos numeros digitados: %d", soma);
    printf("\n Media dos numeros digitados: %.2f", media);
    printf("\n");  

    printf("\n");
    system ("pause");

    return (0);
}