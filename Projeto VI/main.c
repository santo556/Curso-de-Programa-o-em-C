#include <stdio.h>
#include <stdlib.h>

//Aula 6 - Menu de opções (switch case)

int numero;
int main() {
    printf("Sistemas\n\n");
    printf("1 - Windows\n");
    printf("2 - Linux\n");
    printf("\nEscolhar a opcao desejada: \n");
    scanf("%d", &numero);
    switch(numero)
    {
    case 1:
        system("cls");
        printf("Iniciando o Windows...\n");
        printf("Boa sorte com sua escolha.\n");
        break;
    case 2:
        system("cls");
        printf("Iniciando o Linux...\n");
        printf("Bem-vindo ao ceu!!!\n");
        break;

    default:
        printf("Opcao invalida\n");
    }
    system("pause");
    return 0;
}
