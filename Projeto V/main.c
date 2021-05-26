#include <stdio.h>
#include <stdlib.h>

/*
Aula V Calculo da Média - Estrutura de controle (if else) -
Variáveis (tipo float)
*/

int main() {
    float nota1, nota2, media;
    printf("Digite a nota1: ");
    scanf("%f", &nota1);
    printf("Digite a nota2: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("Media: %.1f\n", media);
    if (media < 6)
    {
        printf("\nAluno Reprovado\n");
        printf("\nEstude mais!!!\n");
    }
    else
    {
        printf("\nAluno Aprovado\n");
        printf("\nParabens!!!\n");
    }
    system("pause");
    return 0;
}
