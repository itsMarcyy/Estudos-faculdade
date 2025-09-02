#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    // Solicitar dados do armazém
    printf("Digite a temperatura do armazém: ");
    scanf("%f", &temperatura);
    printf("Digite a umidade do armazém: ");
    scanf("%f", &umidade);
    printf("Digite o estoque atual do armazém: ");
    scanf("%u", &estoque);

    // Verificar condições de segurança
    if(temperatura > 30){
        printf("Alerta: Temperatura alta no armazém!\n");
    } else {
        printf("Temperatura do armazém está dentro do limite.\n");
    }

    if(umidade > 50){
        printf("Alerta: Umidade elevada.\n");
    }else {
        printf("Umidade do armazém está dentro do limite.\n");
    }

    if(estoque < estoqueMinimo){
        printf("Alerta: Estoque abaixo do mínimo!\n");
    } else {
        printf("Estoque do armazém está adequado.\n");
    }
    return 0;
}