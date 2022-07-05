#include <stdio.h>

int find_number(int pacote[], int N){
    int cont = 0;
    for(int i = 0; i < 1000; i++){
        if (pacote[i] == N)
        {
            cont++;
        }
    }

    return cont;
}

void ler(){

    int K, N;
    int pacote[1000];
    for (int i = 0; i < 1000; i++)
    {
        scanf("%d", &K);
        if (K == -1)
        {
            return;
        }
        pacote[i] = K;
    }
    scanf("%d", &N);
    int repete = find_number(pacote, N);
    printf("%d appeared %d times\n", N, repete);
    ler();
}

int main(){
    ler();
    
    return 0;
}