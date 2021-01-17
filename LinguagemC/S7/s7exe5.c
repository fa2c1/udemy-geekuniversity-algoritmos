#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    
    char usuario[100], senha[100];

    printf("\nAlgoritmos Exercicio 22\n\n");

    printf("\n Usuario: ");
    gets(usuario);

    printf("\n Senha: ");
    gets(senha);
    printf("\n");

    while (!strcmp(usuario, senha))
    {
        printf("\n O nome de usuario nao pode ser igual a senha!");
        printf("\n Usuario: ");
        gets(usuario);

        printf("\n Senha: ");
        gets(senha);
        printf("\n");

    }
    
    printf("\n");
    system ("pause");

    return (0);
}