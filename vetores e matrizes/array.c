#include <stdio.h>
 
int main() {

    //declarar tipo e quantidade
    float notas[3] = {85.5, 90.0, 78.3};

    //acesso pelo indice
    printf("Nota do aluno 1 é: %.1f\n", notas[0]);
    printf("Nota do aluno 2 é: %.1f\n", notas[1]);
    printf("Nota do aluno 3 é: %.1f\n", notas[2]);

    return 0;
}