#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    float indice;

    printf("\nAlgoritmos Exercicio 16\n\n");

    printf("Digite o indice de poluicao: ");
    scanf("%f", &indice);
    printf("\n");

    
    if (indice < 0.3)
    {
        printf("Indice OK");
        printf("\n");
    }
    else if (indice >= 0.3 && indice < 0.4)
    {
        printf("Atencao, empresas do primeiro grupo suspender as atividades");
        printf("\n");
    }
    else if (indice >= 0.4 && indice < 0.5)
    {
        printf("Atencao, empresas do primeiro e segundo grupo suspender as atividades");
        printf("\n");
    }
    else
    {
        printf("Atencao todas os grupos suspender as atividades");
        printf("\n");
    }    

    printf("\n");
    system ("pause");

    return (0);
}