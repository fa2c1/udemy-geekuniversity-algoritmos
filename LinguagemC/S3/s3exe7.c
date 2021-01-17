#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    float peso_ideal, altura;

    printf("\nAlgoritmos Exercicio 07\n\n");

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("\n");

    peso_ideal = (72.7 * altura) - 58;

    printf("Seu peso ideal e de: %.3f", peso_ideal);

    printf("\n\n");
    system ("pause");

    return (0);
}
