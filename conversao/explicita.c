#include <stdio.h>

int main(){
    int a = 10;
    int b = 3;
    float quociente = (float)a / (float)b; // conversao explícita de int para float

    printf("Quociente: %.2f\n", quociente);

    return 0;
}