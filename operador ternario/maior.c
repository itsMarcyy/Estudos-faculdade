#include <stdio.h>

int main(){
    int num1 = 40, num2 =45;
    int maior;

    num1 > num2 ? (maior = num1) : (maior = num2);

    printf("O maior numero é: %d\n", maior);

    return 0;
}