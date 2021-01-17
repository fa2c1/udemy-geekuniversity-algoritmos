#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    int cod, qtd;
    float valor, vrtotal;

    printf("\nAlgoritmos Exercicio 02\n\n");

    printf("Digite o codigo da peca: ");
    scanf("%d", &cod);
    printf("Digite o valor: ");
    scanf("%f", &valor);
    printf("Digite a quantidade: ");
    scanf("%d", &qtd);
    printf("\n");

    vrtotal = valor * qtd;

    printf("\n Codigo: %d", cod);
    printf("\n Valor: %.2f", valor);
    printf("\n Quantidade: %d", qtd);
    printf("\n O valor total das pecas e de: %.2f", vrtotal);
    printf("\n");

    printf("\n\n");
    system ("pause");

    return (0);
}
