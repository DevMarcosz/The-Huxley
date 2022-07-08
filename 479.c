#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int linha, coluna;
    scanf("%d %d", &linha, &coluna);
    int mapa[linha][coluna];
    for (int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++){
            scanf("%d", &mapa[i][j]);
        }
    }
    int qtd_passos;
    scanf("%d", &qtd_passos);
    char movimentos[qtd_passos];

    for (int i = 0; i < qtd_passos; i++)
    {
        scanf(" %c", &movimentos[i]);
    }

    int linha_atual;
    int coluna_atual;

    scanf("%d %d", &linha_atual, &coluna_atual);

    for (int i = 0; i < qtd_passos; i++){
        if(movimentos[i] == 'D'){
            if(coluna_atual + 1 < coluna && mapa[linha_atual][coluna_atual + 1] == 1){
                coluna_atual += 1;
            }
        }else if(movimentos[i] == 'C'){
            if(linha_atual - 1 >= 0 && mapa[linha_atual -1][coluna_atual] == 1){
                linha_atual -= 1;
            }
        }else if(movimentos[i] == 'E'){
            if(coluna_atual -1 >= 0 && mapa[linha_atual][coluna_atual - 1] == 1){
                coluna_atual -= 1;
            }
        }else if (movimentos[i] == 'B'){
            if(linha_atual + 1 < linha && mapa[linha_atual + 1][coluna_atual] == 1){
                linha_atual += 1;
            }
        }
    }
    
    printf("(%d,%d)\n", linha_atual, coluna_atual);

    return 0;
}