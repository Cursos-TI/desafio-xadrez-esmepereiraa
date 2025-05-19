#include <stdio.h>

int main (){

    //mover o Bispo: 5 casas na diagonal superior direita

    int b = 0; //b = bispo

    while (b < 5) //numero de casas
    {
        printf("Bispo: Para cima, direita\n", b); //direção do movimento
        b++; //incremento
    }
    
    //mover a Torre: 5 casas para a direita

    int t = 0; //t = torre

    do
    {
        printf("Torre: Direita\n", t); //direção do movimento
        t++; //incremento
    } while (t < 5); //numero de casas

    //mover a Rainha: 8 casas para a esquerda

    int r = 0; //r = rainha

    for(int r = 0; r < 8; r++)
    {
        printf("Rainha: Esquerda\n", r); //direção do movimento
    }
    
    


    return 0;
}