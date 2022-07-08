#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int chegou(int coordL, int coordC, int coordLA, int coordCA){
    if(coordL == coordLA && coordC == coordCA){
        return 1;
    }
    return 0;
}

int main() {
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);
    int matriz[linhas][colunas];
    for (size_t i = 0; i < linhas; i++)
    {
        for(size_t j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    int qtd_passos, passos_dados = 0;
    int linha_atual = 0, coluna_atual = 0;
    
    scanf("%d", &qtd_passos);
    char passos[qtd_passos];

    for (int i = 0; i < qtd_passos; i++)
    {
        scanf(" %c", &passos[i]);
    }

    
    int coord_linha, coord_coluna;
    scanf("%d %d", &coord_linha, &coord_coluna);

    for (int i = 0; i < qtd_passos; i++){
        if(linha_atual == coord_linha && coluna_atual == coord_coluna) break;
        if(passos[i] == 'D'){
            if(coluna_atual + 1 < colunas && matriz[linha_atual][coluna_atual + 1] == 0){
                coluna_atual += 1;
            }else{
                matriz[linha_atual][coluna_atual + 1]--;
            }
        }else if(passos[i] == 'C'){
            if(linha_atual - 1 >= 0 && matriz[linha_atual -1][coluna_atual] == 0){
                linha_atual -= 1;
            }else{
                matriz[linha_atual -1][coluna_atual]--;
            }
        }else if(passos[i] == 'E'){
            if(coluna_atual -1 >= 0 && matriz[linha_atual][coluna_atual - 1] == 0){
                coluna_atual -= 1;
            }else{
                matriz[linha_atual][coluna_atual - 1]--;
            }
        }else if (passos[i] == 'B'){
            if(linha_atual + 1 < linhas && matriz[linha_atual + 1][coluna_atual] == 0){
                linha_atual += 1;
            }else{
                matriz[linha_atual + 1][coluna_atual]--;
            }
        }
        passos_dados++;
    }

    if (linha_atual == coord_linha && coluna_atual == coord_coluna)
    {
        printf("Cheguei com %d movimentos\n", passos_dados);
    } else{
        printf("Nao cheguei\n");
    }
	return 0;
}