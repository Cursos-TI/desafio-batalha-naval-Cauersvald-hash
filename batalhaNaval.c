#include <stdio.h>

int main(){

    // Declaracoes

    int tabuleiro[10][10] = {0};

    // Vetores

    // int navio_x[3] = {3, 3, 3};
    // int navio_y[3] = {3, 3, 3};

    // Coordenadas

    int navio_HL = 1;
    int navio_HC  = 5;

    int navio_VL = 5;
    int navio_VC = 7;

    int navio_DL = 2;
    int navio_DC = 2;

    int navio_DL2 = 6;
    int navio_DC2 = 4;

// Loop contador de lacunas

    for (int i = 0; i < 3; i++)
    {
     tabuleiro[navio_HL][navio_HC + i] = 3; // exclui vetotes e simplifiquei a identificacao dos navios
     tabuleiro[navio_VL + i][navio_VC] = 3;
    }

    for (int i = 0; i < 3; i++) {
        tabuleiro[navio_DL + i][navio_DC + i] = 3;
    }

    for (int i = 0; i < 3; i++) {
        tabuleiro[navio_DL2 + i][navio_DC2 - i] = 3;
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