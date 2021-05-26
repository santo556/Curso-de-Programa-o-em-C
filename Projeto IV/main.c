#include <stdio.h>
#include <stdlib.h>

/*
    Aula IV Estrutura de controle condicional (fluxo) if -
    Variável (tipo int)
*/

int main() {
    int idade;
    printf("Digite a su a idade:");
    scanf("%d", &idade);
    printf("Idade: %d", idade);
    // Estrutura de decisão
    if (idade < 18)
    {
        printf("\nMenor de idade \n");
    }
    if (idade >= 18)
    {
        printf("\nMaior de idade \n");
    }
    system("pause");
    return 0;
}
