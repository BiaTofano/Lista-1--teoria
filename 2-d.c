#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float raio;
    float area;
    float pi;
    float valor;

        pi = 3,14;

    printf("Digite o raio do seu circulo:\n");
    scanf("%f", &raio);

        valor = raio*raio;
        area = valor*pi;

    printf("A área do seu círculo será: %f", area);

    return 0;

}
