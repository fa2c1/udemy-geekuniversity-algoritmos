#include<stdio.h>
#include<stdlib.h>

int main(void){

    float vr_hora, qtd_horas, salario;

    printf("\nAlgoritmos Exercicio 06\n\n");
    
    printf("Digite o valor da hora trabalhada:\t\t");
    scanf("%f", &vr_hora);

    printf("Digite a quantidade de horas trabalhadas:\t");
    scanf("%f", &qtd_horas);
    printf("\n");

    salario = vr_hora * qtd_horas;

    printf("\n Valor da hora:\t\t %.2f", vr_hora);
    printf("\n Quantidades de Horas:\t %.2f", qtd_horas);
    printf("\n Salario a receber:\t %.3f", salario);

    printf("\n\n");
    system ("pause");

    return (0);
}
