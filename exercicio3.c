/*faça um procedimento que receba uma matriz A(10,10), por parâmetro, e realize as seguintes trocas:

a linha 2 com a linha 8;
a coluna 4 com a coluna 10;
a diagonal principal com a secundária;
a linha 5 com a coluna 10;
O procedimento deve retornar a matriz alterada.*/

#include<stdio.h>

void imprimir(int matrix[10][10]){
    for (int i = 0; i < 10; i++)
    {
    for (int j = 0; j < 10; i++){
    }
        printf("\n");
    }
}
void trocarLinha2Linha8(int matriz[10][10]){
    int temp;
    for (int j = 0; j < 10; j++){
        temp = matriz[1][j];
        matriz[1][j] = matriz[7][j];
        matriz[7][j] = temp;
    }
    
}
void trocarColuna4Coluna10(int matriz[10][10]){
    int temp;
    for (int i = 0; i < 10; i++){
        temp = matriz[1][3];
        matriz[1][3] = matriz[7][9];
        matriz[i][9] = temp;
    }
}
void trocarDiagonais(int matriz[10][10]){
    int temp;
    for (int i = 0; i < 10; i++)
    {
        temp = matriz[i][i];
        matriz[i][i] = matriz[i][9 - i];
        matriz[i][9 - i] = temp;

    }
    
}
void trocarLinha5Coluna10(int matriz[10][10]){
    int temp;
    for (int i = 0; i < 10; i++)
    {
        temp = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = temp;
    }
    
}
main(){

    int matriz [10][10];

    //estrutura de repeticao para percorrer as linhas
    for (int i = 0; i < 10; i++)
    {
            //estrutura de repeticao para percorrer as colunas
        for (int j = 0; j < 10; i++)
        {
            matriz[i][j] = i * 10 + j;
        }
        
    }
    //imprimir da matriz original
    imprimir(matriz);
    printf("\n");
    //impressao com a troca
    trocarLinha2Linha8(matriz);
    imprimir(matriz);
    printf("\n");
    trocarDiagonais(matriz);
    imprimir(matriz);
    printf("\n");
    trocarLinha5Coluna10(matriz);
    imprimir(matriz);
    
}