#include <stdio.h>

int main() {
  int temperatura = 32;
  char* estado;

  estado = (temperatura > 30) ? "Calor" : "Frio";

  printf("Estado: %s\n", estado);

  return 0;
}