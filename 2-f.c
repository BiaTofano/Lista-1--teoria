#include <stdio.h>
#include <stdlib.h>

int main(){

float temp_f;

    printf("Seja bem-vindo ao nosso programa de convers�o de temperatura\n\n");
    printf("Digite a temperatura em graus fahrenheit : \n");
    scanf("%f", &temp_f);

float temp_c = (0.55555555555)*(temp_f-32);

    printf("O resultado da convers�o para graus Celcius �: %f", temp_c);

return 0;

}
