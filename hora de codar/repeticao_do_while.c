#include <stdio.h>

int main(){
    int numero;

    do{
        printf("Digite um número par para sair do programa: ");
        scanf("%d", &numero);
        if (numero % 2 == 0){
            printf("O número %d é par!\n", numero);
        }else {
            printf("O número %d é ímpar!\n", numero);
        }
    }while (numero % 2 != 0);
    printf("Você digitou um número par, programa encerrado...");

    return 0;
}