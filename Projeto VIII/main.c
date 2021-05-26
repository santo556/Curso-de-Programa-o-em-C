#include <stdio.h>
#include <stdlib.h>

/*
    Aula 8 - Tabuada
    (Estruturas de repetições laços for while)
*/

int numero,resposta;
int contador = 0;

int main()
{
do
{
    system("cls");
    printf("Tabuada\n\n");
    printf("Digite o numero: ");
    scanf("%d", &numero);
    for(contador=0;contador<=10;contador++)
    {
        printf("%d x %d = %d\n",numero,contador,numero*contador); // o \n tem que ficar dentro de aspa
    }
    printf("\n1- Novo calculo\n");
    printf("2- Sair\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &resposta);
}while(resposta != 2);
    system("pause");
    return 0;
}


