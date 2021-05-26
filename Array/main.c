#include <stdio.h>
#include <stdlib.h>

/*
    Aula 10 - Array (Simples e Multidimensional)
*/

int main()
{
    float nota1 = 8;
    float nota2 = 6;
    float nota3 = 9;
    float nota4 = 3;
    printf("Sem Aray\n");
    printf("Nota3: %.1f\n", nota3);
    printf("--------------------------\n");
    float notas[4] = {8, 6, 9, 3};
    printf("Com array\n");
    printf("Nota3: %.1f\n", notas[2]);
    printf("--------------------------\n");
    notas[1] = 7;
    printf("Modificando o conteudo do Array\n");
    printf("Notas2: %.1f\n", notas[1]);
    printf("--------------------------\n");
    float boletim[2][4] = {{8, 7, 9, 3},{4, 5, 8, 6}};
    printf("Array multidimensional\n");
    printf("Nota: %.1f\n", boletim[1][0]);
    system("pause");
    return 0;
}
