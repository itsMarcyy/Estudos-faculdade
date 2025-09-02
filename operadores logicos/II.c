//OU Lógico (II)
//Descrição: o operador || retorna verdadeiro se pelo menos uma das expressões que ele conecta for verdadeira. Se ambas as expressões forem falsas, o resultado será falso.

#include <stdio.h>

int main(){
    int a = -10, b = -5;

    if(a > 0 || b > 0){
        printf("Pelo menos um dos números é positivo.\n");
    } else {
        printf("Nenhum dos números é positivo.\n");
    }
}