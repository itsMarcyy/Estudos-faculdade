#include <stdio.h>

int main(){
    //declarar veriaveis de produto, estoque, valor unitario, estoque minimo e valor total
    char produto1[30] = "Produto 1";
    char produto2[30] = "Produto 2";

    unsigned int estoque1 = 1000;
    unsigned int estoque2 = 2000;

    float valor1 = 10.50;
    float valor2 = 20.40;

    unsigned int estoqueMinimo1 = 500;
    unsigned int estoqueMinimo2 = 2500;

    double valorTotal1;
    double valorTotal2;

    int resultado1, resultado2;

    //exibir informacoes dos produtos
    printf("Produto %s tem estoque de %u e valor unitario de R$ %.2f\n", produto1, estoque1, valor1);
    printf("Produto %s tem estoque de %u e valor unitario de R$ %.2f\n", produto2, estoque2, valor2);

    //comparar com o valor minimo de estoque
    resultado1 = estoque1 > estoqueMinimo1;
    resultado2 = estoque2 > estoqueMinimo2;

    printf("O produto %s tem estoque mínimo %d\n", produto1, resultado1);
    printf("O produto %s tem estoque mínimo %d\n", produto2, resultado2);

    //comparações entre os valores totais do produto
    printf("O valor total do Poroduto1 é (R$%.2f) é maior que o valor total do Produto2 (R$%.2f)? %d\n", estoque1 * valor1, estoque2 * valor2, (estoque1 * valor1) > (estoque2 * valor2));
}