#include <stdio.h>

#define LINHA 3
#define COLUNA 3

int main(){

    int matriz[LINHA][COLUNA];
    int target = 9;
    int found = 0;
    int soma = 1;

    for(int i = 0; i < LINHA; i++){ //loop externo para as linhas
        for(int j = 0; j < COLUNA; j++){
            matriz[i][j] = soma; //preenche a matriz com valores sequenciais
            soma++;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }   

    //busca condicional
    for(int i = 0; i < LINHA; i++){ //loop externo para as linhas
        for(int j = 0; j < COLUNA; j++){ //loop interno para as colunas
            if(matriz[i][j] == target){
                printf("Valor %d encontrado na posicao [%d][%d]\n", target, i, j);
                found = 1; //se encontrar o valor, marca como encontrado
                break; //sai do loop interno
            }
        }
        if(found) break; //se encontrado, sai do loop externo
    }
        if (!found) {
        printf("Elemento %d não encontrado na matriz\n", target);
    }
 
    return 0;
}