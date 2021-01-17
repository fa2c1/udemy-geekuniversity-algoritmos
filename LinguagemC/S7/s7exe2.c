#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nAlgoritmos Exercicio 19\n\n");
    
    for (int i = 1; i <= 100; i++)
    {
        printf("%d \n", i);
        if (i % 10 == 0)
        {
            printf("Multiplo de 10: %d \n ", i);
        }
    }
    
    printf("\n");
    system ("pause");

    return (0);
}