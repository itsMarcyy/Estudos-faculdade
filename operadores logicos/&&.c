//E Lógico (&&)
//Descrição: o operador && retorna verdadeiro se e somente se ambas as expressões que ele conecta forem verdadeiras. Se qualquer uma das expressões for falsa, o resultado será falso.

#include <stdio.h>
 
int main(){
    int a = - 10, b = 5;

    if(a > 0 && b > 0){
        printf("Ambos os números sao positivos.\n");
    } else {
        printf("Pelo menos um dos números nao é positivo.\n");
    }
}