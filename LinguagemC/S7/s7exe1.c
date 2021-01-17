#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    int maior = 0, valor;

    printf("\nAlgoritmos Exercicio 18\n\n");

    printf("Digite um numero: ");
    scanf("%d", &valor);
    printf("\n");

   while (valor != 0)
   {
        if (valor > maior)
        {
            maior = valor;
            printf("Digite um numero: ");
            scanf("%d", &valor);
            printf("\n");
        }
        else{
            printf("Digite um numero: ");
            scanf("%d", &valor);
            printf("\n");
        }

   }

    printf("O maior valor digitafo foi: %d", maior);
 

    printf("\n\n");
    system ("pause");

    return (0);
}