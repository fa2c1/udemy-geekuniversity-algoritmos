#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    int num, i, p;

    printf("\nAlgoritmos Exercicio 10\n\n");

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        p = num;
        printf("Numero Par: %d", p);
        printf("\n");
    }
    else
    {
        i = num;
        printf("Numero impar: %d", i);
        printf("\n");
    }

    printf("\n");   
    system ("pause");

    return (0);
}