#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    float num, a, b;

    printf("\nAlgoritmos Exercicio 09\n\n");

    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num >= 0)
    {
        a = num;
        printf("Numero positivo: %.2f", a);
        printf("\n");
    }
    else
    {
        b = num;
        printf("Numero negativo: %.2f", b);
        printf("\n");
    }
    
    printf("\n");
    system ("pause");

    return (0);
}
