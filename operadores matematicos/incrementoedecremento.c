#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-incremento ++a
    Pós-incremento a++
    Decremento (--)
    Pré-decremento --a
    Pós-decremento a--
    */

    int numero1 = 1, resultado;

    //incremento
    printf("Antes do incremento: %d\n", numero1);
    numero1++;
    printf("Depois do incremento: %d\n", numero1);

    //decremento
    printf("Antes do decremento: %d\n", numero1);
    numero1--;
    printf("Depois do decremento: %d\n", numero1);

    //pre e pós incremento
    printf("Antes do pré-incremento: %d\n", numero1);
    resultado = ++numero1;
    printf("resultado (pré-incremento): %d\n", resultado);

    printf("Antes do pós-incremento: %d\n", numero1);
    resultado = numero1++;
    printf("resultado (pós-incremento): %d\n", resultado);

    //pre e pós decremento
    printf("Antes do pré-decremento: %d\n", numero1);
    resultado = --numero1;
    printf("Resultado (pré-decremento): %d\n", resultado);

    printf("Antes do pós-decremento: %d\n", numero1);
    resultado = numero1--;
    printf("Resultado (pós-decremento): %d\n", resultado);
}