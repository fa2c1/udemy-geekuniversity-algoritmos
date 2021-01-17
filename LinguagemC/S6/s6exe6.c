#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    int c;
    float e, n, s, ex, saldo;

    printf("\nAlgoritmos Exercicio 13\n\n");

    printf("Codigo Funcionario:\t");
    scanf("%d", &c);
    printf("Qtd Horas:\t\t");
    scanf("%f", &n);
    printf("\n");

    e = 0;
    ex = 0;
    saldo = 0;
    
    if (n > 240)
    {
        e = n - 240;
        n = n - e;
        ex =  e * 20;
        s = n * 10;
        saldo = s + ex;
        printf("Codigo Funcionario:\t%d\n", c);
        printf("Salario:\t\t%.2f\n", s);
        printf("Qtd Hrs Extras:\t\t%1.f\n", e);
        printf("Valor Hrs Extras:\t%.2f\n\n", ex);
        printf("Saldo Total:\t\t%.2f\n", saldo);

    }
    else
    {
        s = n * 10;
        saldo = s;
        printf("Codigo Funcionario:\t%d\n", c);
        printf("Salario:\t\t%.2f\n", s);
        printf("Qtd Hrs Extras:\t\t%1.f\n", e);
        printf("Valor Hrs Extras:\t%.2f\n\n", ex);
        printf("Saldo Total:\t\t%.2f\n", saldo);
    }
    

    printf("\n\n");
    system ("pause");

    return (0);
}