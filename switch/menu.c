#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
  int opcao;
  int numeroSecreto, palpite;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch(opcao)
  {
    case 1:
        srand(time(0)); //Inicializa o gerador de números aleatórios
        numeroSecreto = rand() % 10 + 1; //Gera um número aleatório entre 1 e 10
        printf("Jogo Iniciado! Tente adivinhar o número entre 1 e 10: ");
        scanf("%d", &palpite);
        if (numeroSecreto == palpite) {
            printf("Parabéns! Você acertou o número secreto!\n");
        } else {
            printf("Errado! O número secreto era %d.\n", numeroSecreto);
        }
        break;
    case 2:
        printf("Regras do Jogo:\n");
        printf("1. O jogo gera um número aleatório entre 1 e 10.\n");
        printf("2. Você deve tentar adivinhar o número.\n");
        printf("3. Se você acertar, ganha o jogo!\n");
        printf("4. Se errar, o número correto será revelado.\n");
        break;
    case 3:
        printf("Saindo do jogo. Até a próxima!\n");
        break;
    default:
        printf("Opção inválida! Por favor, escolha uma opção válida.\n");
        break;
  }
  return 0;
}