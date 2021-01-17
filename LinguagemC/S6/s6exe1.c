#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    int n;

    printf("\nAlgoritmos Exercicio 08\n\n");

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("\n");

    if(n > 100)
    {
        printf("O numero digitado foi: %d", n);
        printf("\n");
    }
    else
    {
        n = 0;
        printf("Retorno Zerado: %d", n);
        printf("\n");
    }    

    printf("\n");
    system ("pause");

    return (0);
}
