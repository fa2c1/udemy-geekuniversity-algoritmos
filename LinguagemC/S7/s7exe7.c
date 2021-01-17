#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    int id, qtd = 0, opcao1 = 0, opcao2 = 0, opcao3 = 0, opcao4 = 0, qtd_total = 0;
    float porop1, porop2, porop3, porop4;

    printf("\nAlgoritmos Exercicio 24\n\n");

    while (id != 0)
    {
        printf("=========================================================================\n");
        printf("\t\t\tcontrole de Mouses Com Defeito\n");
        printf("=========================================================================\n");
        printf("\n");
        printf("Identifique o defeito:\n");
        printf("\n");
        printf("1 Nececita de esfera\n");
        printf("2 Necessita de limpesa\n");
        printf("3 Nececita de Troca de cabo ou conector\n");
        printf("4 Quebrado ou inutilizado\n");
        printf("0 Sair do programa\n");
        printf("=========================================================================\n");
        printf("Codigo do defeito: ");
        scanf("%d", &id);
        printf("=========================================================================\n");
        if (id <= 0 || id > 4)
        {
            qtd_total = qtd_total - 1;
            printf("\n");
            printf("Codigo errado Digite novamente");
            printf("\n");
            printf("\n");
        }
        if (id == 1)
        {
            opcao1 = opcao1 + 1;
        }
        if (id == 2)
        {
            opcao2 = opcao2 + 1;
        }
        if (id == 3)
        {
            opcao3 = opcao3 + 1;
        }
        if (id == 4)
        {
            opcao4 = opcao4 + 1;
        }
        qtd_total = qtd_total + 1;           
    }    
    
    porop1 = ((float)opcao1 /(float)qtd_total) * 100;
    porop2 = ((float)opcao2 /(float)qtd_total) * 100;
    porop3 = ((float)opcao3 /(float)qtd_total) * 100;
    porop4 = ((float)opcao4 /(float)qtd_total) * 100;

    printf("=========================================================================\n");
    printf("\t\t\tRelatorio Final \n");
    printf("=========================================================================\n");
    printf("Quantidade de Mouses Analizados %d \n", qtd_total);
    printf("=========================================================================\n");
    printf("Tipo de Problema\t\t\t|Quantidade\t|Porcentagem\t|\n");
    printf("=========================================================================\n");
    printf("1 Nececita de esfera\t\t\t|\t%d\t|\t%.3f%%\t|\n", opcao1, porop1);
    printf("2 Necessita de limpesa\t\t\t|\t%d\t|\t%.3f%%\t|\n", opcao2, porop2);
    printf("3 Nececita de Troca de cabo ou conector\t|\t%d\t|\t%.3f%%\t|\n", opcao3, porop3);
    printf("4 Quebrado ou inutilizado\t\t|\t%d\t|\t%.3f%%\t|\n", opcao4, porop4);
    printf("=========================================================================\n");

    printf("\n");
    system ("pause");

    return (0);
}