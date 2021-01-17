#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(void){
    
    int n1, n2, n3, n4, q1, q2, q3, q4;

    printf("\nAlgoritmos Exercicio 14\n\n");

    printf("Digite primeiro numero:\t");
    scanf("%d", &n1);
    printf("Digite segundo numero:\t");
    scanf("%d", &n2);
    printf("Digite terceiro numero:\t");
    scanf("%d", &n3);
    printf("Digite quarto numero:\t");
    scanf("%d", &n4);
    printf("\n");

    q1 = pow(n1,2);
    q2 = pow(n2,2);
    q3 = pow(n3,2);
    q4 = pow(n4,2);

    if (q3 >= 1000)
    {
        printf("O expoente do numero 3 e: %d", q3);
    }
    else
    {
        printf("O expoente do numero 1 e: %d\n", q1);
        printf("O expoente do numero 2 e: %d\n", q2);
        printf("O expoente do numero 3 e: %d\n", q3);
        printf("O expoente do numero 4 e: %d\n", q4);
    }
    

    printf("\n");
    system ("pause");

    return (0);
}