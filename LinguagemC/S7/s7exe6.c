#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    int num;

    printf("\nAlgoritmos Exercicio 23\n\n");

    printf("Digite o numero que deseja obter a o resultado da tabuada: ");
    scanf("%d", &num);
    printf("\n");

    while (num < 0 || num > 10)
    {
        printf("O nUmero deve ser digitado entre 0 e 10\n");
        printf("Digite o numero que deseja obter a o resultado da tabuada: ");
        scanf("%d", &num);
        printf("\n");
    }

    printf("Tabuada do numero: %d", num);
    printf("\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }   

    printf("\n");
    system ("pause");

    return (0);
}