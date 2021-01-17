#include<stdio.h>
#include<stdlib.h>

int main(void){

    printf("\nAlgoritmos Exercicio 20\n\n");
    
    for (int i = 100; i < 200; i++)
    {
        if (i % 2 != 0)
        {
            printf("\nNumero Impar: %d", i);
        }        
    }
    
    printf("\n\n");
    system ("pause");

    return (0);
}