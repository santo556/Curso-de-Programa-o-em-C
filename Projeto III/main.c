#include <stdio.h>
#include <stdlib.h>

/*
    Aula III Uso da variável char em strings
*/

int main() {
    char nome[50];
    printf("Digite seu nome? \n");
    gets(nome);
    system("cls");
    printf("Bem vindo %s\n", nome);
    system("pause");
    return 0;
}
