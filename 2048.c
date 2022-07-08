#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char caraceter;
    int qtdApostas;
    scanf("%d", &qtdApostas);
    int apostas[qtdApostas][10];
    int numeros_sorteados[6];
    int numeros_apostados[qtdApostas];
    int acertos[qtdApostas];

    for (size_t i = 0; i < qtdApostas; i++){
        numeros_apostados[i] = 0;
        for (size_t j = 0; j < 10; j++){
            scanf("%d%c", &apostas[i][j], &caraceter);
            numeros_apostados[i]++;

            if(caraceter == '\n') break;    
        }
    }
    
    for (size_t i = 0; i < 6; i++)
    {
        scanf("%d", &numeros_sorteados[i]);
    }

   
    int ganhadores = 0;

    for (size_t i = 0; i < qtdApostas; i++){
        acertos[i] = 0;
        for (size_t j = 0; j < numeros_apostados[i]; j++){
            for (size_t l = 0; l < 6; l++){
                if (apostas[i][j] == numeros_sorteados[l])
                {
                    acertos[i]++;
                }   
            }     
        }
    }
    for (size_t i = 0; i < qtdApostas; i++)
    {
        if(acertos[i] == 6) ganhadores++;
    }
    
    
    printf("Total de Ganhadores: %d\n", ganhadores);
    //Meu Deus do ceu, onde que eu tava querendo chegar nos cod anteriorrrrrrr vou me matar
    return 0;
}
