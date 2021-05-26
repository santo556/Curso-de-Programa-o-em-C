#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Aula 9 - Jogo do Dado
    gerando números aleatórios e customizar o ícone(.exe)
*/

int main()
{
    printf("Jogo do dado\n");
    srand(time(NULL));
    printf("Face: %d\n", rand()%6 + 1);
    system("pause");
    return 0;
}

