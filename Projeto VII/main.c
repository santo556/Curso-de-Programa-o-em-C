#include <stdio.h>
#include <stdlib.h>

// Aula 7 - O que é função? Como criar funções? (Parte 1/2)

void teste(void);

int main()
{
    printf("Exemplo de funcao\n\n");
    teste(); // Para chamar a função.
    teste();
    printf("Fim\n");
    system("pause");
    return 0;
}

void teste(void)
{
    printf("Aluno Andre Venancio dos Santos\n");
}
