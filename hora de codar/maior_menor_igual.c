#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //gera numero aleatorio
    srand(time(0));
    numeroComputador = rand() % 100 +1; 

    //inicio do jogo
    printf("Bem vindo ao jogo do Maior, Menor ou Igual!\n");
    printf("Digite um numero entre 1 e 100 e o tipo de comparação");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escola a comparação: ");
    scanf(" %c", &tipoComparacao);

    printf("Digite o seu numero: ");
    scanf("%d", &numeroJogador);

    printf("Numero do computador: %d\n", numeroComputador);

    switch(tipoComparacao){
        case 'M':
        case 'm':
            printf("Você escolheu Maior!\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
        case 'N':
        case 'n':
            printf("Você escolheu Menor!\n");
            resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
        case 'I':
        case 'i':
            printf("Você escolheu Igual!\n");
            resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
        default:
            printf("Tipo de comparação inválida!\n");
    }
    printf("Numero do computador é: %d e o do jogagor é %d\n", numeroComputador, numeroJogador);

    if(resultado == 1){
        printf("Parabéns, você ganhou!\n");
    } else {
        printf("Que pena, você perdeu!\n");
    }
}