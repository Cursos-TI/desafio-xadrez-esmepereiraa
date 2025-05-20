#include <stdio.h>

int main (){

    //mover o Bispo: 5 casas na diagonal superior direita

    int b = 0; //b = bispo

    while (b < 5) //numero de casas
    {
        printf("Bispo: Para cima, direita\n", b); //direção do movimento
        b++; //incremento
    }
    
        printf("\n");

    //mover a Torre: 5 casas para a direita

    int t = 0; //t = torre

    do
    {
        printf("Torre: Direita\n", t); //direção do movimento
        t++; //incremento
    } while (t < 5); //numero de casas

        printf("\n");

    //mover a Rainha: 8 casas para a esquerda

    int r = 0; //r = rainha

    for(int r = 0; r < 8; r++)
    {
        printf("Rainha: Esquerda\n", r); //direção do movimento
    }
    
    printf("\n");

    //mover o cavalo em L

    int movimentacaoCavalo = 1;

    while (movimentacaoCavalo--);
    {
        for (movimentacaoCavalo = 1; movimentacaoCavalo <= 2; movimentacaoCavalo++)
        printf("Cavalo: Cima\n"); //comanda para cima 2x
        {
            printf("Cavalo: Direita\n"); //comando para direita 1x
        }
        
    }
    


    return 0;
}