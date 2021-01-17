#include<stdio.h>
#include<stdlib.h>

int main(void){
        
    int num;

    printf("\nAlgoritmos Exercicio 15\n\n");

    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("\n");

    if (num % 2 == 0)
    {
        if (num >= 0)
        {
            printf("Este numero e Par Positivo");
            printf("\n");
        }
        else
        {
            printf("Este numero e Par Negativo");
            printf("\n");
        }        
    }
    else
    {
        if (num > 0)
        {
            printf("Este numero e Impar Positivo");
            printf("\n");
        }
        else
        {
            printf("Este numero e Impar Negativo");
            printf("\n");
        }
    }
    
    printf("\n");
    system ("pause");

    return (0);
}