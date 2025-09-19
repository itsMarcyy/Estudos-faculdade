#include <stdio.h>

int main(){
    int index;
    char * nomesAlunos[3][3]={
        {"João", "Pt: 30", "Mat: 90"},
        {"Maria", "Pt: 60", "Mat: 60"},
        {"Pedro", "Pt: 90", "Mat: 30"}
    };

    printf("Digite o número do aluno que deseja ver as notas.");
    printf("Para João digite 0\n");
    printf("Para Maria digite 1\n");
    printf("Para Pedro digite 2\n");

    scanf("%d", &index);

    printf("O aluno %s tem as seguintes notas: %s e %s\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);

    return 0;
}