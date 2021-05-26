#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Bibliotecas de idiomas

/*
Aula II Fundamentos - Uso de bibliotecas,
acentuação e comandos de sistema (color cls pause)
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Olá, Mundo! \n");
    system("color 04");
    system("pause");
    // Para limpar a tela
    system("cls");
    system("color DF");
    printf("Aluno André Venâncio dos Santos \n");
    system("pause");
    return 0;
}
