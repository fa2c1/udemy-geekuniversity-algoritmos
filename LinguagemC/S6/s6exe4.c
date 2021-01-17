#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    char sexo;
    float altura, peso_ideal;

    printf("\nAlgoritmos Exercicio 11\n\n");

    printf("Digite seu sexo: ");
    scanf("%c", &sexo);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("\n");
    
    if (sexo == 'F' || sexo == 'f')
    {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal e: %.2f", peso_ideal);
        printf("\n");
    }
    else if (sexo == 'M' || sexo == 'm')
    {
        peso_ideal = (62.1 * altura) - 58;
        printf("Seu peso ideal e: %.2f", peso_ideal);
        printf("\n");
    }
    else
    {
        printf("Digite um sexo valido M ou F");
        printf("\n");
    }
    
    printf("\n");
    system ("pause");

    return (0);
}