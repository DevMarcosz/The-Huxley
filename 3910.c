#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct monstro
{
    int ID;
    char classe[20];
    int vida;
    int dano;
    int xp_drop;
};

struct jogador
{
    int ID;
    char classe[20];
    int vida;
    int dano;
    int xp;
};

void ler_monstros(int qtd_monstros, struct monstro monstros[]){

    for(int i = 0; i < qtd_monstros; i++){
        scanf("%d", &monstros[i].ID);
        scanf("%s", &monstros[i].classe);
        scanf("%d", &monstros[i].vida);
        scanf("%d", &monstros[i].dano);
        scanf("%d ", &monstros[i].xp_drop);
    }
}
int main() {
    int qtd_monstros;
    int i, j, k,l;
    scanf("%d", &qtd_monstros);
    struct monstro monstros[qtd_monstros];
    struct jogador pedro, tulio;
    ler_monstros(qtd_monstros, monstros);
    
    fgets(pedro.classe, 22, stdin);
    scanf("%d %d", &pedro.dano, &pedro.vida);
    pedro.xp = 0;
    
    scanf("%d %d", &i, &j);


    fgets(tulio.classe, 22, stdin);
    scanf("%d %d", &tulio.dano, &tulio.vida);
    tulio.xp = 0;
    
    scanf("%d %d", &k, &l);

    int tamanho_floresta;
    scanf("%d", &tamanho_floresta);
    int floresta[tamanho_floresta*tamanho_floresta];

    for(int i = 0; i < tamanho_floresta; i++){
        for(int j = 0; j < tamanho_floresta; j++){
            scanf("%d", floresta[i]);
        }
    }

    int rodadas;
    scanf("%d", &rodadas);

    for (int i = 0; i < rodadas; i++)
    {
        scanf("%d %d", &i, &j);
        scanf("%d %d", &k, &l);
    }
    


	return 0;
}