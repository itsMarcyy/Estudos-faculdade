#include <stdio.h>

int main(){
    int variavel;

    printf("Digite um valor\n");
    scanf("%d", &variavel);

    switch(variavel){
    case 1:
        printf("O valor é 1\n");
    break;
    case 2:
        printf("O valor é 2\n");
    break;
    default:
        printf("O valor não é 1 nem 2\n");
    }
}