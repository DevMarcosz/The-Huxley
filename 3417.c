#include <stdio.h>



void func(){
    int n;
    scanf("%d", &n);
    if(n == -1){
        return;
    }else{
    int cont = 0;
    for (int i = 0; i < 10; i++)
    {
        int num;
        scanf("%d", &num);
        if(num == n){
            cont++;
        }
    }
    printf("%d appeared %d times\n", n, cont);
    func();
    }
}


int main(){
    func();

    return 0;
}