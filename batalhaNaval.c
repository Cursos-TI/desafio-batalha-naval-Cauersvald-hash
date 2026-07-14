#include <stdio.h>

int main(){

    // Declaracoes de Variaveis

    int opcao;
    int index;
    int tabuleiro[10][10] = {0};

    // Vetores

    int navio_x[3] = {3, 3, 3};
    int navio_y[3] = {3, 3, 3};

    // Coordenadas

    int linha_x = 2;
    int coluna_x = 4;

    int linha_y = 5;
    int coluna_y = 7;

// Loop contador de lacunas

    for (index = 0; index < 3; index++)
    {
     tabuleiro[linha_x][coluna_x + index] = navio_x[index];
     tabuleiro[linha_y + index][coluna_y] = navio_y[index];
    }

    // Contador de linhas (0 a 9(A a J))

     for (int linha = 0; linha < 10; linha++)
     {

    // Contador de colunas (0 a 9)
    
     for (int col = 0; col < 10; col++)
     {
    // Escrevendo os resultados linhas e colunas
    
     printf("%d ", tabuleiro[linha][col]);
     }
     printf("\n");
     }
    

    return 0;
}