#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    float p, e, m;

    printf("\nAlgoritmos Exercicio 12\n\n");

    printf("Digite a qtd de kilos pescados: ");
    scanf("%f", &p);
    printf("\n");
    
    e = 0;
    m = 0;

    if (p > 50)
    {
        e = p - 50;
        m = e * 4;
        printf("Quilos pescados:\t%.3f\n", p);
        printf("Ecedente em Kilos:\t%.3f\n", e);
        printf("Valor da multa:\t\t%.2f\n", m);
    }
    else
    {
        printf("Quilos pescados:\t%.3f\n", p);
        printf("Ecedente em Kilos:\t%.3f\n", e);
        printf("Valor da multa:\t\t%.2f\n", m);
    }
    

    printf("\n");
    system ("pause");

    return (0);
}