#include<stdio.h>
#include<stdlib.h>

int main(void){

    int idade;

    printf("\nAlgoritmos Exercicio 17\n\n");
    
    printf("Idade do Atleta: ");
    scanf("%d", &idade);
    printf("\n");

    if (idade >= 5 && idade <= 7)
    {
        printf("Categoria Infantil A");
    }   
    else if (idade >= 8 && idade <= 11)
        {
            printf("Categoria infantil B");
        }
    else if (idade >= 12 && idade <= 13)
        {
            printf("Categoria Juvenil A");
        }
    else if (idade >= 14 && idade < 18)
        {
            printf("Categoria Juvenil B");
        }
    else
        {
            printf("Categoria Adulto");
        }   
    

    printf("\n\n");
    system ("pause");

    return (0);
}
