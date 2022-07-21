#include <stdio.h>

void analisar_maiores(int num, int maiores[5]){
    for (int i = 0; i < 5; i++)
    {
        if(maiores[i] == -1){
            maiores[i] = num;
            break;
        }
        else if(num > maiores[i]){
            maiores[i] = num;
            break;
        }
    }
}

void ordenar(int maiores[5]){
    int aux;
    for (int i = 0; i < 4; i++)
    {
        if (maiores[i] > maiores[i+1])
        {
            aux = maiores[i+1];
            maiores[i+1] = maiores[i];
            maiores[i] = aux;
        }
        
    }
    
}

int main(){
    int n, d;
    int maiores[5];
    for (int i = 0; i < 5; i++)
    {
        maiores[i] = -1;
    }   
    scanf("%d %d", &n, &d);
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        if(num%10 == d){
            analisar_maiores(num, maiores);
            ordenar(maiores);
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", maiores[i]);
    }
    

    return 0;
}