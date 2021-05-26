#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
* Jogo Jokenpo
*/

int main() {
    int jogador, computador;
    // Lógica do jogador
    printf("Jokenpo\n\n");
    printf("I. Pedra\n");
    printf("II. Papel\n");
    printf("III. Tesoura");
    printf("Digite a opcao que deseja: ");
    scanf("%d", &jogador);
    printf("------------------------------------\n\n");
    switch(jogador)
    {
        case 1:
            printf("Jogador escolheu Pedra\n");
            break;
        case 2:
            printf("Jogador escolheu Papel\n");
            break;
        case 3:
            printf("Jogador escolheu Tesoura\n");
            break;
        default:
            printf("Opcao invalida\n");
    }
    // Lógica do computador
    srand(time(NULL));
    computador = ("%d", rand()% 3 + 1);
    switch(computador)
    {
        case 1:
            printf("Computador escolheu Pedra\n");
            break;
        case 2:
            printf("Computador escolheu Papel\n");
            break;
        case 3:
            printf("Computador escolheu Tesoura\n");
            break;
    }
    // Lógica para determinar o vencedor
    if(jogador == computador)
    {
        printf("Empate\n");
    }
    else if((jogador == 1 && computador == 3) || (jogador == 2 && computador == 1) || (jogador == 3 && computador == 2))
    {
        printf("Jogador venceu\n");
    }
    else
    {
        printf("Computador venceu\n");
    }
    printf("------------------------------------\n");
    system("PAUSE");
    return 0;
}
