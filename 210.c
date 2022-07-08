#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ler_matriz(int matriz[][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int checar_nums_diags(int matriz[][3])
{
    int i, j, cont = 0, cont2 = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if ((i + j == 2))
            {
                if (matriz[i][j] == 1)
                {
                    cont++;
                }
            }
            if(i == j){
                if (matriz[i][j] == 1)
                {
                    cont2++;
                }
            }
        }
    }
    if (cont == 3 || cont2 == 3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int checar_matriz(int matriz[][3])
{
    int i, j, cont = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i-j != 0 || i+j != 2)
            {
                if(matriz[i][j] == 0){
                    cont++;
                }
            }
        }
    }
    if(cont == 6 && checar_nums_diags(matriz) == 1){
        return 1;
    }
    else{
        return 0;
    }
}

int checar_matriz_igual(int matriz1[][3], int matriz2[][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz1[i][j] != matriz2[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}

int checar_diags_igual(int matriz[][3], int matriz2[][3])
{
    int i, j, cont = 0, cont2 = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if ((i + j == 2))
            {
                if (matriz[i][j] == matriz2[i][j])
                {
                    cont++;
                }
            }
            if(i == j){
                if (matriz[i][j] == matriz2[i][j])
                {
                    cont2++;
                }
            }
        }
    }
    if (cont == 3 || cont2 == 3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void batalha(int vidaLuke, int vidaVader)
{
  int i =0;
  while (i < 10)
  {
    if(vidaVader <= 0 && vidaLuke > 0){
        printf("Luke Skywalker venceu.");
        return;
    }else if(vidaLuke <= 0 && vidaVader > 0){
        printf("Darth Vader venceu.");
        return;
    }else if(vidaLuke <= 0 && vidaVader <= 0){
        printf("Houve Empate.");
        return;
    }
    else if((scanf("%[^\n]") != EOF)){
        int luke[3][3], vader[3][3];

        ler_matriz(luke);
        ler_matriz(vader);

        if(checar_matriz(luke) && checar_matriz(vader) && checar_diags_igual(luke, vader)){
        vidaLuke -= 15;
        vidaVader -= 15;
        if(vidaLuke <= 0 && vidaVader <=0){
            printf("Houve empate.");
            return;
        }else if(vidaLuke <= 0){
            printf("Darth Vader venceu.");
            return;
        }else if(vidaVader <= 0){
            printf("Luke Skywalker venceu.");
            return;
        }else{
            ++i;
            continue;
        }
    }
    else if(checar_matriz(luke) && checar_matriz(vader) && !checar_matriz_igual(luke, vader))
    {
        ++i;
        continue;
    }
    else if(!checar_matriz(luke) && checar_matriz(vader)){
        vidaLuke -= 15;
        if(vidaLuke <= 0){
            printf("Darth Vader venceu.");
            return;
        }else{
            ++i;
            continue;
        }
    }
    else if(checar_matriz(luke) && !checar_matriz(vader)){
        vidaVader -= 15;
        if(vidaVader <= 0){
            printf("Luke Skywalker venceu.");
            return;
        }else{
            ++i;
            continue;
        }
    } 
  }
}
    printf("Houve empate.");
}


int main(){
    int vida_luke, vida_vader;
    scanf("%d %d", &vida_luke, &vida_vader);

    batalha(vida_luke, vida_vader);
    
    
    
    return 0;
}