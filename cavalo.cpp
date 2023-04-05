#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){


// criando o tabuleiro
int tabuleiro[8][8];
// colocando somente as casas com 0 como populáveis, ou seja não foram passadas ainda
for (int i; i < 8; i++){
    for (int j; j < 8; j++){
        tabuleiro[i][j] = 0;
    }
}
 // criando a função de movimento do cavalo recebendo a posição por parâmtro
 // recebe a posição da linha, coluna, uma string de direção e o número de movimento
  mv_cavalo(int pos_l, int pos_c, string dir, num_mv){
    if (dir == cima_d && tabuleiro[pos_l - 2][pos_c + 1] == 0){
        tabuleiro[pos_l + 1][pos_c - 2] = num_mv;
    }
    else if (dir == cima_e && tabuleiro[pos_l - 2][pos_c - 1] == 0){
        tabuleiro[pos_l - 1][pos_c - 2] = num_mv;
    }
     else if (dir == dir_c && tabuleiro[pos_l - 1][pos_c - 1] == 0){
        tabuleiro[pos_l - 1][pos_c - 2] = num_mv;
    }
return 0;
}